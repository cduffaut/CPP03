#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    KnightA("KnightA");
    ScavTrap    KnightB("KnightB");

    std::cout << std::endl;

    KnightB.guardGate();

    std::cout << std::endl;

    KnightB.attack("KnightA");

    std::cout << std::endl;
    
    KnightA.takeDamage(5);

    std::cout << std::endl;

    KnightA.beRepaired(5);

    // Then we make Knight B died

    std::cout << std::endl;
    std::cout << std::endl;

    KnightA.attack("SoldierB");

    std::cout << std::endl;

    KnightB.takeDamage(32);

    std::cout << std::endl;

    KnightB.beRepaired(4);

    std::cout << std::endl;

    return (0);
}