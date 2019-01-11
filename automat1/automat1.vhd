library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
entity automat1 is
    Port ( input0 : in  STD_LOGIC;
           clock : in  STD_LOGIC;
           y : out  STD_LOGIC);
end automat1;

architecture Behavioral of automat1 is

signal state_present, state_next: std_logic_vector(1 DOWNTO 0);

constant S0: std_logic_vector (1 DOWNTO 0) :="11";
constant S1: std_logic_vector (1 DOWNTO 0) :="01";
constant S2: std_logic_vector (1 DOWNTO 0) :="10";

begin

process(input0, state_present)
begin
 CASE state_present IS
 
 WHEN S0 => IF input0 = '0' THEN
             state_next <= S0;
				ELSE
				 state_next <= S1;
				END IF;
 WHEN S1 => IF input0 = '0' THEN
             state_next <= S1;
				ELSE
				 state_next <= S2;
				END IF;
 WHEN S2 => IF input0 = '0' THEN
             state_next <= S2;
				ELSE
				 state_next <= S0;
				END IF;
 WHEN OTHERS => state_next <= S0;
 END CASE;
 END PROCESS;
 
 PROCESS ( clock )
 BEGIN
      if falling_edge(clock) THEN
		state_present <= state_next;
END IF;
END PROCESS;

PROCESS (state_present)
BEGIN
     CASE state_present IS
WHEN S0 => y <= '1';
WHEN S1 => y <= '0';
WHEN S2 => y <= '0';
WHEN OTHERS => y <= '0';

END CASE;
END PROCESS;

				

end Behavioral;


