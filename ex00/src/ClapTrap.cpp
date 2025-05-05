#include "../includes/ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Claptrap " << _name << " created!" << std::endl; 
}

ClapTrap::ClapTrap(const ClapTrap &copy) : _name(copy._name), _hitPoints(copy._hitPoints), _energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage)
{
	std::cout << "Claptrap " << _name << " copied!" << std::endl; 
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage; 
	}
	std::cout << "Claptrap " << _name << " assigned!" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap " << _name << " destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (_hitPoints <= 0)
	{
		std::cout << "Claptrap " << _name << " is already dead!" << std::endl;
		return;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "Claptrap:" << _name << "don't have enought energy points to attack!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "Claptrap " << _name << " attacks " << target << ", causing " << _attackDamage << " point of damage!" << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "Claptrap " << _name << " is already dead!" << std::endl;
		return;
	}
	_hitPoints -= amount;
	if (_hitPoints <= 0)
	{
		std::cout << "Claptrap " << _name << "lost" << amount << " hit points and died!" << std::endl;
		return ;
	}
	std::cout << "Claptrap " << _name << " lost " << amount << " hit points and now has " << _hitPoints << "!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "Claptrap " << _name << " is already dead and cannot be rapaired!" << std::endl;
		return;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "Claptrap " << _name << " don't have enought energy points to attack!" << std::endl;
		return ;
	}
	_energyPoints--;
	_hitPoints += amount;
	std::cout << "Claptrap " << _name << " is reapird and get " << amount << " points. Now its " << _energyPoints << " total!" << std::endl;
}