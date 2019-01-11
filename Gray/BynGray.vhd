
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity BynGray is
    Port ( b : in  STD_LOGIC_vector(2 downto 0);
           g : out  STD_LOGIC_vector(2 downto 0) );
end BynGray;

architecture funkcijska2 of BynGray is

begin
p1: process (b) is 
         variable x, y, z: std_logic;
begin
  --izracun izlaza
  x := b(2);
  y := (b(1) and not b(2)) or (not b(1) and b(2));
  z := (b(0) and not b(1)) or (not b(0) and b(1));
  --pridjeljivanje izlaza
  g(2) <= x after 20 ns;
  g(1) <= y after 20 ns;
  g(0) <= z after 20 ns;
   --alternativa:
	-- g <= (x, y, z) after 20 ns;
end process;
end funkcijska2;

architecture funkcijska of BynGray is
begin
p1: process(b) is 
begin
 case b is
  when "000" => g <= "000" after 20 ns;
  when "001" => g <= "001" after 20 ns;
  when "010" => g <= "011" after 20 ns;
  when "011" => g <= "010" after 20 ns;
  when "100" => g <= "110" after 20 ns;
  when "101" => g <= "111" after 20 ns;
  when "110" => g <= "101" after 20 ns;
  when "111" => g <= "100" after 20 ns;
  when others => g <= "000";
  end case;
  end process ;
end funkcijska;

