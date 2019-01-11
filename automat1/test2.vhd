
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY test2 IS
END test2;
 
ARCHITECTURE behavior OF test2 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT automat1
    PORT(
         input0 : IN  std_logic;
         clock : IN  std_logic;
         y : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal input0 : std_logic := '0';
   signal clock : std_logic := '0';

 	--Outputs
   signal y : std_logic;

   -- Clock period definitions
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: automat1 PORT MAP (
          input0 => input0,
          clock => clock,
          y => y
        );

   --- Clock process definitions
   clock_process :process
   begin
		clock <= '0';
		wait for clock_period/2;
		clock <= '1';
		wait for clock_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		input0 <= '0';
      wait for 100 ns;	

      input0 <= '1';
 

      wait;
   end process;

END;
