#pragma once

#include <iostream>
#include <string>

class ClapTrap {
    protected:
        std::string name;
        int hitPonints;
        int energyPoints;
        int attackDamage;
    public:
        ClapTrap(std::string name);
        ~ClapTrap();

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beReapaired(unsigned int amount);
};