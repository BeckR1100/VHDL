library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity automat is
    Port ( ulaz  : in  STD_LOGIC;
           clock : in  STD_LOGIC;
			  reset : in STD_LOGIC;
			  izlaz : out STD_LOGIC);
end automat;

architecture Behavioral of automat is
      signal state_present, state_next: std_logic_vector(1 DOWNTO 0);
		CONSTANT S0: std_logic_vector(1 DOWNTO 0) :="00";
		CONSTANT S1: std_logic_vector(1 DOWNTO 0) :="01";
		CONSTANT S2: std_logic_vector(1 DOWNTO 0) :="10";
		CONSTANT S3: std_logic_vector(1 DOWNTO 0) :="11";
begin
process(ulaz, state_present)
begin
     CASE state_present IS
	    WHEN S0 =>   IF ulaz = '1' THEN state_next <= S1;
		              ELSE state_next <= S0; END IF;
		 WHEN S1 =>   IF ulaz = '1' THEN state_next <= S2;
		              ELSE state_next <= S0; END IF;
		 WHEN S2 =>   IF ulaz = '1' THEN state_next <= S2;
		              ELSE state_next <= S3; END IF;
		 WHEN S3 =>   IF ulaz = '1' THEN state_next <= S2;
		              ELSE state_next <= S0; END IF;
		 WHEN OTHERS => state_next <= S0;
	END CASE;
END PROCESS;

PROCESS( clock, reset )
BEGIN
IF reset = '0' THEN
   state_present <= S0;
   ELSIF falling_edge(clock) THEN
   state_present <= state_next;
	END IF;
END PROCESS;


PROCESS(state_present)
BEGIN
   CASE state_present is
	    WHEN S0 => izlaz <= '0';
		 WHEN S1 => izlaz <= '0';
		 WHEN S2 => izlaz <= '1';
		 WHEN S3 => izlaz <= '1';
		 WHEN OTHERS => izlaz <= '0';
END CASE;
END PROCESS;
						  
end Behavioral;

