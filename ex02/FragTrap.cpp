#include "FragTrap.hpp"

// ex02

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    std::cout << "FragTrap Name constructor has been called." << std::endl;
    _Name = Name;
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor has been called." << std::endl;   
}


void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_Name << " get a high five !" << std::endl;
}
