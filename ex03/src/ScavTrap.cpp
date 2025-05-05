#include "../includes/ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap("Unknown")
{ 
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "Claptrap " << _name << " copied!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage; 
	}
	std::cout << "Scavtrap " << _name << " assigned!" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " is already dead and cannot attacks!" << std::endl;
		return;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " doesn't have enough energy points to attack!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " point of damage!" << std::endl; 
}

void ScavTrap::guardGate()
{
	if (_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " is dead and cannot get into guear mode!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}