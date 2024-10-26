#include "ClapTrap.hpp"

int main(void) {
    ClapTrap a("AA");

    a.attack("target");
    a.takeDamage(100);
    a.beReapaired(1111);
}