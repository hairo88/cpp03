#pragma once

#include "ClapTrap.hpp"

class FragTrap : public  ClapTrap {
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap& src);
        ~FragTrap();

        FragTrap & operator=(const FragTrap &rhs);

        void highFivesGuys();
};