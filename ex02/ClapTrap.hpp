#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class   ClapTrap
{
	protected:

			std::string	_Name;
			int 		_HitPoints;
			int 		_EnergyPoints;
			int 		_AttackDamage;

	public:

			ClapTrap();
			ClapTrap(std::string Name);
			~ClapTrap();

			void attack(const std::string& target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
};

#endif