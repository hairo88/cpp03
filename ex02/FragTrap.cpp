#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    hitPonints = 100;
    energyPoints = 100;
    attackDamage = 100;
    std::cout << "FragTrap" << name << " constructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src) {
    std::cout << "FragTrap " << src.name << " copy constructed!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " destructed!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs) {
    if (this != &rhs) {
        name = rhs.name;
        hitPonints = rhs.hitPonints;
        energyPoints = rhs.energyPoints;
        attackDamage = rhs.attackDamage;
    }
    std::cout << "FragTrap " << name << " assigned!" << std::endl;
    return *this;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " requests apositive high five" << std::endl;
}