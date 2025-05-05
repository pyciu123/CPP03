#include "../includes/DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("Unknown_clap_name")
{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name")
{
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " created!" << std::endl; 
}
DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ScavTrap(copy), FragTrap(copy)
{
	*this = copy;
	std::cout << "DiamondTrap " << _name << " copied!" << std::endl; 
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	_name = other._name + "_clap_trap";
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "DiamondTrap " << _name << " assigned!" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " destroyed!" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	if (_hitPoints > 0)
		std::cout << "I am DiamondTrap and my name is " << _name << " but my build from ClapTrap named " << ClapTrap::_name << std::endl;
	else
		std::cout << "DiamondTrap " << _name  << " is dead and cannot say enything!" << std::endl;
}