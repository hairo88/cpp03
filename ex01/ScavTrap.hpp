#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public:
        ScavTrap(const std::string& name);
        ~ScavTrap();

        void attack(const std::string);
        void guardGate();

};