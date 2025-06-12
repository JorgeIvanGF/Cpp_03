/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 19:13:37 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/12 15:10:22 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap()
{
	_name = "Unnamed Scav";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called.\n";
}

// Param constructor
ScavTrap::ScavTrap(const std::string& name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << YELLOW << _name << RESET << " constructed.\n";
}

// Assignment operator:
// Re-using the parent operator= with the ScavTrap obj "other"
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other); // reuse parent
	}
	std::cout << "ScavTrap assignment operator called.\n";
	return *this;
}

// Copy constructor:
// First in the Initializer list has to call the ClapTrap Copy Constructor
// using the same ScavTrap object "other".
// Since ScavTrap inherits from ClapTrap, a ScavTrap is-a ClapTrap.
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	*this = other; // using the operator=
	std::cout << "ScavTrap copy constructor called.\n";
}

// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << YELLOW << _name << RESET << " destructed.\n";
}

// Override attack
void ScavTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0 || _energyPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " is too tired or dead to attack.\n";
		return;
	}
	_energyPoints--;
	std::cout << "ScavTrap " << YELLOW << _name << RESET << " fiercely attacks " << YELLOW << target << RESET
			  << ", causing " << YELLOW << _attackDamage << RESET << " points of damage!\n";
}

// Unique method
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << YELLOW << _name << RESET << " is now in Gate Keeper mode!\n";
}