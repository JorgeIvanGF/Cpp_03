/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:22:40 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/12 17:05:52 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
FragTrap::FragTrap()
	: _name("Unnamed Frag"), _hitPoints(100), _energyPoints(100), _attackDamage(30)
{
	 std::cout << "FragTrap default constructor called\n";
}*/

// Default constructor
FragTrap::FragTrap()
{
	_name = "Unnamed Frag";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap default constructor called\n";
}

// Constructor with name
FragTrap::FragTrap(const std::string& name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << YELLOW << _name << RESET << " constructed\n";
}

// Operator=
FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "FragTrap assignment operator called\n";
	return *this;
}

// Copy Constructor
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	*this = other;
	std::cout << "FragTrap copy constructor called\n";
}

// Destructor
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << YELLOW << _name << RESET <<" destructed\n";
}

// Special Method for this Class
void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << YELLOW << _name << RESET << " requests a high five! 🙌\n";
}