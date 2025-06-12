/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 19:05:07 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/11 16:23:36 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
	: _name(other._name), _hitPoints(other._hitPoints),
	  _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
	std::cout << "ClapTrap copy constructor called for " << _name << ".\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap assignment operator called.\n";
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::ClapTrap(const std::string& name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << YELLOW << _name << RESET << " constructed." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << YELLOW << _name << RESET << " destructed." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0 || _energyPoints <= 0)
	{
		std::cout << "ClapTrap " << YELLOW << _name << RESET << " has no energy points or hit points to attack." 
			<< std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << YELLOW << _name << RESET << " attacks " << YELLOW << target << RESET 
		<< " cousing " << YELLOW << _attackDamage << RESET << " points of damage." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	if(_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "ClapTrap " << YELLOW << _name << RESET << " takes " << YELLOW << amount << RESET 
		<< " points of damage! Hit Points are now: " << YELLOW << _hitPoints << RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(_hitPoints <= 0 || _energyPoints <= 0)
	{
		std::cout << "ClapTrap " << YELLOW << _name << RESET << " can't repair due to NO energy or hit points."
			<< std::endl;
		return ;
	}
	_energyPoints--;
	_hitPoints += amount;
	std::cout << "ClapTrap " << YELLOW << _name << RESET << " has been repaired for " << YELLOW << amount << RESET 
		<< " points!. Hit points are now: " << YELLOW << _hitPoints << RESET << " , and Energy points are: " << YELLOW << _energyPoints
		<< RESET << std::endl;
}

void ClapTrap::status()const
{
	std::cout << "ClapTrap " << YELLOW << _name << RESET << " has Energy points: " << YELLOW << _energyPoints << RESET
		<< " , Hit points: " << YELLOW << _hitPoints << RESET << " and Attack damage: " << YELLOW << _attackDamage << RESET << "\n";
	
}