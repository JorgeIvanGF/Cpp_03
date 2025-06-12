/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:41:21 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/12 16:22:10 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

// Colors
#define RESET   "\033[0m"
#define YELLOW  "\033[0;33m"
#define MAGENTA "\033[0;35m"
#define RED "\033[0;31m"

class ClapTrap
{
	protected:  // "Protected" To be able to access in Child Classes
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;

	public:

		ClapTrap(const std::string &name);
		
		// Orthodox Canonical Form
		ClapTrap();                                  // Default Constructor
		ClapTrap(const ClapTrap &other);             // Copy Constructor
		ClapTrap &operator=(const ClapTrap &other);  // Copy assignment
		~ClapTrap();                                 // Destructor
	
		// Methods
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		// My additional Method
		void status() const;
};

#endif