#include "../includes/FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap("Unknown")
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " created!" << std::endl; 
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "Claptrap " << _name << " copied!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage; 
	}
	std::cout << "FragTrap " << _name << " assigned!" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destroyed!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	if (_hitPoints <= 0)
	{
		std::cout << "Fragtrap " << _name << " is dead and cannot say anything!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << _name << ": Hey guys! Do you want a high five? :)" << std::endl;
}