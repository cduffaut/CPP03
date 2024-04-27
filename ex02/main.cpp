#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap    FighterA("FighterA");
    FragTrap    FighterB("FighterB");

    std::cout << std::endl;

    FighterB.highFivesGuys();

    std::cout << std::endl;

    FighterB.attack("FighterA");

    std::cout << std::endl;
    
    FighterA.takeDamage(9);

    std::cout << std::endl;

    FighterA.beRepaired(20);

    // Then we make Knight B died

    std::cout << std::endl;
    std::cout << std::endl;

    FighterA.attack("FighterB");

    std::cout << std::endl;

    FighterB.takeDamage(157);

    std::cout << std::endl;

    FighterB.beRepaired(8);

    std::cout << std::endl;

    return (0);
}