#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class   ClapTrap
{
	public:
			// ex 00
			ClapTrap();
			ClapTrap(std::string Name);
			~ClapTrap();

			void attack(const std::string& target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);

	private:
			//ex 00
			std::string	_Name;
			int 		_HitPoints;
			int 		_EnergyPoints;
			int 		_AttackDamage;

};

#endif