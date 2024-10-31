#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name{name} {
    hitPonints = 10;
    energyPoints = 10;
    attackDamage = 0;
    std::cout << "ClapTrap " << name << " constructed" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap" << name << " destructed!" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
    if (hitPonints > 0 && energyPoints > 0) {
        
    }
}

