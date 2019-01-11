LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
ENTITY testmooreovstroj IS
END testmooreovstroj;
 
ARCHITECTURE behavior OF testmooreovstroj IS 
 
 
    COMPONENT automat
    PORT(
         ulaz : IN  std_logic;
         clock : IN  std_logic;
         reset : IN  std_logic;
         izlaz : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal ulaz : std_logic := '0';
   signal clock : std_logic := '0';
   signal reset : std_logic := '0';

 	--Outputs
   signal izlaz : std_logic;

   -- Clock period definitions
--   constant clock_period : time := 100 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: automat PORT MAP (
          ulaz => ulaz,
          clock => clock,
          reset => reset,
          izlaz => izlaz
        );
--
--   -- Clock process definitions
--   clock_process :process
--   begin
--
--	 time select	
--		wait for clock_period/2;
--		clock <= '1';
--		wait for clock_period/2;
--   end process;
-- 

   -- Stimulus process
   stim_proc: process
   begin		
	wait for 190 ns;
	reset<= '1';
	wait for 100 ns;
   ulaz<='1';
	wait for 100 ns;
	ulaz<='0';
	 wait for 100 ns;
	 clock<= '1';
		wait;
   end process;

END;
