#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include <iostream>

int main() {
	std::cout << "\n=== Death Test ===" << std::endl;

	// ClapTrap — test
	std::cout << "\n--- ClapTrap ---" << std::endl;
	ClapTrap alpha("Alpha");
	alpha.takeDamage(1);
	alpha.attack("Target");
	alpha.beRepaired(5);

	// ScavTrap — test
	std::cout << "\n--- ScavTrap ---" << std::endl;
	ScavTrap bravo("Bravo");
	bravo.takeDamage(15);
	bravo.attack("Target");
	bravo.guardGate();

	// FragTrap — test
	std::cout << "\n--- FragTrap ---" << std::endl;
	FragTrap charlie("Charlie");
	charlie.takeDamage(20);
	charlie.attack("Target");
	charlie.beRepaired(30);
	charlie.highFivesGuys();

	std::cout << "\n=== END ===" << std::endl;
	return 0;
}