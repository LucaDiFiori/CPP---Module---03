/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-07 15:06:01 by ldi-fior          #+#    #+#             */
/*   Updated: 2024-10-07 15:06:01 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


//Canonical form________________________________________________________________
ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "-ClapTrap- " << this->_name << " created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "-ClapTrap- " << this->_name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	*this = src;
	std::cout << "-ClapTrap- " << this->_name << " created as a copy of " << src.getName() << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	this->_name = src.getName();
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "-ClapTrap- " << this->_name << " destroyed" << std::endl;
}


//Getters_______________________________________________________________________
std::string	ClapTrap::getName() const
{
	return (this->_name);
}

int ClapTrap::getHitPoints() const
{
	return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints() const
{
	return (this->_energyPoints);
}

int ClapTrap::getAttackDamage() const
{
	return (this->_attackDamage);
}


//Member functions______________________________________________________________
