/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-08 08:52:27 by ldi-fior          #+#    #+#             */
/*   Updated: 2024-10-08 08:52:27 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//Constructors__________________________________________________________________
FragTrap::FragTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap " << this->_name << " created." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap " << this->_name << " created." << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src) 
{
	std::cout << "FragTrap " << this->_name << " created as a copy of " 
		<< src.getName() << std::endl;
}

//assignment operator___________________________________________________________
FragTrap& FragTrap::operator=(const FragTrap& src)
{
	this->_name = src.getName();
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();

	return(*this);
}

//destructor____________________________________________________________________
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " destroyed." << std::endl;	
}


//method________________________________________________________________________
void FragTrap::highFivesGuys(void)
{
	if (this->_hitPoints <= 0)
		std::cout << "FragTrap " << this->_name << " is dead, can't high five" << std::endl;
	else
		std::cout << "FragTrap " << this->_name <<  " :HIGH FIVE!" << std::endl;
}