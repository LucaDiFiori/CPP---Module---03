/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-07 15:05:29 by ldi-fior          #+#    #+#             */
/*   Updated: 2024-10-07 15:05:29 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

int main() {
    // Create a DiamondTrap object named "Diamond"
    DiamondTrap diamond("Diamond");

    // Display the initial state of the DiamondTrap
    diamond.whoAmI();  // Should print both its name and its ClapTrap name

    // Test the inherited functions from FragTrap and ScavTrap
    diamond.attack("target");  // Test attack function from ScavTrap

    // Display hit points, energy points, and attack damage
    std::cout << "Hit Points: " << diamond.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << diamond.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << diamond.getAttackDamage() << std::endl;

    // Demonstrate special abilities
    diamond.highFivesGuys();  // Call FragTrap's special ability
    diamond.guardGate();       // Call ScavTrap's special ability

    // Demonstrate copying a DiamondTrap
    DiamondTrap diamondCopy(diamond);  // Create a copy of the DiamondTrap
    diamondCopy.whoAmI();  // Ensure the copy has the correct names

    // Display hit points, energy points, and attack damage of the copy
    std::cout << "Copied DiamondTrap:" << std::endl;
    std::cout << "Hit Points: " << diamondCopy.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << diamondCopy.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << diamondCopy.getAttackDamage() << std::endl;

    return 0;
}

