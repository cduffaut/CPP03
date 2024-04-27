#include "ClapTrap.hpp"

// ex00

// Default constructor
ClapTrap::ClapTrap() : _Name(), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "ClapTrap Default constructor has been called." << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : _Name(Name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "ClapTrap Name constructor has been called." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor has been called." << std::endl;   
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->_EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_Name << " does not have energy points left.\nCan't execute action." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_Name << " just attacked "<< target << " !" << std::endl;
    std::cout << "ClapTrap " << this->_Name << " lose one energy point by attacking." << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    this->_EnergyPoints -= amount;
    if (this->_EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_Name << " lose " << amount << " points of energy and just died." << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->_Name << " has been attacked !" << std::endl;
        std::cout << "ClapTrap " << this->_Name << " has lost " << amount << " energy points: " ;
        std::cout << "ClapTrap " << "He has " <<  this->_EnergyPoints << " life points left." << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_Name << " does not have energy points left.\nCan't execute action." << std::endl;
        return ;
    }
    this->_EnergyPoints += amount;
    std::cout << "ClapTrap " << this->_Name << " just recup' " << amount << " energy points." << std::endl;

}