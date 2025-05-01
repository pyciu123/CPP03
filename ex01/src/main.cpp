#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include <iostream>

int main()
{
	// ClapTrap
	std::cout << "\n=== ClapTrap Test ===" << std::endl;
	ClapTrap clap("Clappy");
	clap.attack("enemy");
	clap.beRepaired(5);
	clap.attack("another enemy");

	std::cout << "--- Clappy takes fatal damage ---" << std::endl;
	clap.takeDamage(20); // kills
	clap.attack("enemy");
	clap.beRepaired(3);

	// ScavTrap
	std::cout << "\n=== ScavTrap Test ===" << std::endl;
	ScavTrap scav("Scavy");
	scav.attack("zombie");
	scav.beRepaired(10);
	scav.guardGate();

	std::cout << "--- Scavy takes fatal damage ---" << std::endl;
	scav.takeDamage(120);
	scav.attack("undead");
	scav.guardGate();

	std::cout << "\n=== Destructors will be called now ===" << std::endl;
	return 0;
}