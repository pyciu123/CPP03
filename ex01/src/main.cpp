#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include <iostream>

int main() {
    std::cout << "\n=== ClapTrap Test ===\n";
    ClapTrap ct("Alpha");
    ct.attack("Enemy");
    ct.takeDamage(5);
    ct.beRepaired(3);
    ct.takeDamage(10);
    ct.attack("Enemy");

    std::cout << "\n=== ScavTrap Test ===\n";
    ScavTrap st("Bravo");
    st.attack("Enemy");
    st.takeDamage(50);
    st.beRepaired(20);
    st.guardGate();
    st.takeDamage(100);
    st.guardGate();

    std::cout << "\n=== Energy Depletion Test ===\n";
    ScavTrap spammer("Spammer");
    for (int i = 0; i < 52; i++)
        spammer.attack("Target");

    std::cout << "\n=== END ===\n";
    return 0;
}