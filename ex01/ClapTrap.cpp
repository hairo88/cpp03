#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string newName) {
    name = newName;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    std::cout << "ClapTrap " << name << " constructed!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " destructed!" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (hitPoints > 0 && energyPoints > 0) {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    } else {
        std::cout << "ClapTrap " << name << " can't attack (no hit points or energy points left)." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << name << " take damage" << amount << std::endl;
    if ((unsigned int)hitPoints < amount)
        hitPoints = 0;
    else
        hitPoints -= amount;
}

void ClapTrap::beReapaired(unsigned int amount) {
    if (energyPoints > 0 && amount > 0)
    {
        std::cout << "ClapTrap " << name << " is reapaired for " << amount << " hit points!" << std::endl;
        hitPoints += amount;
        energyPoints--;
    }
    else {
        std::cout << "ClapTrap " << name << " can't be repaired (no energy points left or invalid repair amount)." << std::endl;
    }
}