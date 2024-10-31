#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap constructor called for " << name << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called for " << name << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScarTra" << name << "is now in Gate keeper mode." << std::endl;
}
