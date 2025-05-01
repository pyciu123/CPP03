#include "../includes/ClapTrap.hpp"

int main()
{
	ClapTrap clap("john");

	clap.attack("marian");
	clap.takeDamage(5);
	clap.beRepaired(2);
	clap.attack("marian");
	clap.attack("marian");
	clap.attack("marian");
	clap.attack("marian");
	clap.attack("marian");
	clap.attack("marian");
	clap.attack("marian");
	clap.attack("marian");
	clap.attack("marian");
	clap.attack("marian");
	clap.takeDamage(10);
	clap.beRepaired(10);
	clap.attack("marian");
}