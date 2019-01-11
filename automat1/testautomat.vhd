LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
ENTITY testautomat IS
END testautomat;
 
ARCHITECTURE behavior OF testautomat IS 
 
    COMPONENT automat1
    PORT(
         input0 : IN  std_logic;
         clock : IN  std_logic;
         y : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal input0 : std_logic := '1','1','1','0';
   signal clock : std_logic := '1','0','1','0';

 	--Outputs
   signal y : std_logic;

   -- Clock period definitions
   constant clock_period : time := 30 ns;
 
BEGIN
 
   uut: automat1 PORT MAP (
          input0 => input0,
          clock => clock,
          y => y
        );

   -- Clock process definitions
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
		input0 <= '1';
      wait for 100 ns;	
      input0 <= '0';
      

      wait;
   end process;

END;
