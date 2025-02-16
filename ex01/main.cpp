#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    std::cout << "--- ClapTrapのテスト ---" << std::endl;
    ClapTrap clap("Clappy");
    clap.attack("target");
    clap.takeDamage(5);
    clap.beRepaired(3);
    std::cout << "--- ClapTrapのテスト終了 ---" << std::endl;
    std::cout << std::endl;

    std::cout << "--- ScavTrapのテスト ---" << std::endl;
    ScavTrap scav("Scavvy");
    scav.attack("target");
    scav.takeDamage(15);
    scav.beRepaired(10);
    scav.guardGate();
    std::cout << "--- ScavTrapのテスト終了 ---" << std::endl;

    return 0;
}