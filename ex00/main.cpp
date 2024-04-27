#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    SoldierA("SoldierA");
    ClapTrap    SoldierB("SoldierB");

    std::cout << std::endl;

    SoldierB.attack("SoldierA");

    std::cout << std::endl;
    
    SoldierA.takeDamage(5);

    std::cout << std::endl;

    SoldierA.beRepaired(5);

    // Then we make soldier B died

    std::cout << std::endl;
    std::cout << std::endl;

    SoldierA.attack("SoldierB");

    std::cout << std::endl;

    SoldierB.takeDamage(20);

    std::cout << std::endl;

    SoldierB.beRepaired(1);

    std::cout << std::endl;

    return (0);
}