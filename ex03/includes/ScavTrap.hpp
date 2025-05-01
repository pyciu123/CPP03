#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
 
class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ClapTrap &copy);
		ScavTrap &operator=(const ScavTrap &other);
		~ScavTrap();

		//methods
		void attack(const std::string &target);
		void guardGate();
};		

#endif