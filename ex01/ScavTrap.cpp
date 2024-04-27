#include "ScavTrap.hpp"

// ex01

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    std::cout << "ScavTrap Name constructor has been called." << std::endl;
    _Name = Name;
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor has been called." << std::endl;   
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_Name << " is now in Gate keeper mode." << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->_EnergyPoints <= 0)
    {
        std::cout << "ScavTrap " << this->_Name << " does not have energy points left.\nCan't execute action." << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_Name << " just attacked "<< target << " !" << std::endl;
    std::cout << "ScavTrap " << this->_Name << " lose one energy point by attacking." << std::endl;
}