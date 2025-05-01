#include "../includes/ClapTrap.hpp"
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

	std::cout << "\n=== Destructors will be called now ===" << std::endl;
	return 0;
}