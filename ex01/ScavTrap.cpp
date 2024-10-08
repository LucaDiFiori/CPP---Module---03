/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-08 07:20:27 by ldi-fior          #+#    #+#             */
/*   Updated: 2024-10-08 07:20:27 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//Constructors__________________________________________________________________

/*
* Note:
* In C++, constructors of base classes must be called in the initialization list, 
* not inside the body of the constructor. This is because base class constructors 
* are always called before the derived class constructor's body is executed.
*
*
* 1. The base class ClapTrap's default constructor is called in the initialization list 
*    using ClapTrap(). This ensures that the ClapTrap part of the object is properly 
*    initialized before any ScavTrap-specific setup.
* 
* 2. After the base class is initialized, the ScavTrap-specific attributes are set
*/
ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap " << this->_name << " created." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap " << this->_name << " created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
	std::cout << "ScavTrap " << this->_name << " created as a copy of " 
		<< src.getName() << std::endl;
}

//assignment operator___________________________________________________________
ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
	this->_name = src.getName();
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();

	return(*this);
}

//destructor____________________________________________________________________

/*Derived class destructor is called first.
Base class destructor is called next, automatically, once the derived class 
has been destructed.*/
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " destroyed." << std::endl;
}

//Override method_______________________________________________________________
void ScavTrap::attack(const std::string& target) 
{
    if (this->_hitPoints < 1) 
	{
        std::cout << "ScavTrap " << this->_name << " is dead and can't attack!" << std::endl;
        return;
    }
    if (this->_energyPoints < 1) 
	{
        std::cout << "ScavTrap " << this->_name << " is out of energy and can't attack!" << std::endl;
        return;
    }

    this->_energyPoints -= 1;
    std::cout << "ScavTrap " << this->_name << " attacks " << target
              << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode." << std::endl;
}