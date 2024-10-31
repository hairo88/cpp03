#include "ScavTrap.hpp"

int main(void) {
    ClapTrap claptrap("Clappy");
    ScavTrap scavtrap("Scavvy");

    claptrap.attack("a target");
    scavtrap.attack("a target");
    scavtrap.guardGate();

    return 0;
}