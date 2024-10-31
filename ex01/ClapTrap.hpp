#pragma once

#include <iostream>
#include <string>

class ClapTrap {
    protected:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    public:
        ClapTrap(std::string newName);
        ~ClapTrap();

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beReapaired(unsigned int amount);
};
