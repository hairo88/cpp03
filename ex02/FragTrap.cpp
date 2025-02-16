#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "Default FragTrap " << " constructed!" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " constructed!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name << " destructed!" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << name << " requests a high five! Let's spread the positive vibes!" << std::endl;
}