LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY mainGray IS
END mainGray;
 
ARCHITECTURE behavior OF mainGray IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT BynGray
    PORT(
         b : IN  std_logic_vector(2 downto 0);
         g : OUT  std_logic_vector(2 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal b : std_logic_vector(2 downto 0) := (others => '0');

 	--Outputs
   signal g : std_logic_vector(2 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
--   constant <clock>_period : time := 20 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: BynGray PORT MAP (
          b => b,
          g => g
        );

--   -- Clock process definitions
--   <clock>_process :process
--   begin
--		<clock> <= '0';
--		wait for <clock>_period/2;
--		<clock> <= '1';
--		wait for <clock>_period/2;
--   end process;
 

   -- Stimulus process
   tb: process begin
   --tb1
      wait for 100 ns;	
      b <= "000";
	--tb2
	    wait for 90 ns;	
      b <= "001";
	--tb3
	 wait for 80 ns;	
      b <= "010";
	--tb4
	 wait for 70 ns;	
      b <= "011";
	--tb5
	 wait for 60 ns;	
      b <= "100";
	--tb6
	 wait for 50 ns;	
      b <= "101";
	--tb7
	 wait for 20 ns;	
      b <= "111";
   end process;

END;
