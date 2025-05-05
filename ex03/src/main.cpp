#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"
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

    // FragTrap
	std::cout << "\n=== FragTrap Test ===" << std::endl;
	FragTrap frag("Fraggy");
	frag.attack("robot");
	frag.beRepaired(8);
	frag.highFivesGuys();

	std::cout << "--- Fraggy takes fatal damage ---" << std::endl;
	frag.takeDamage(200);
	frag.attack("cyber ghost");
	frag.highFivesGuys();

    // DiamondTrap
	std::cout << "\n=== DiamondTrap Test ===" << std::endl;
	DiamondTrap diamond("Diamondy");
	diamond.attack("boss");
	diamond.beRepaired(15);
	diamond.whoAmI();

	std::cout << "--- Diamondy takes fatal damage ---" << std::endl;
	diamond.takeDamage(300);
	diamond.attack("ultra boss");
	diamond.beRepaired(50);
	diamond.whoAmI();

	// Memory alocation
	ClapTrap *test = new DiamondTrap();
	test->attack("asdjbn");

	std::cout << "\n=== Destructors will be called now ===" << std::endl;
	delete test;
	return 0;
}