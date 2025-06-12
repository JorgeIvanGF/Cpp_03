/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 19:10:35 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/12 15:31:48 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

// Colors
#define RESET   "\033[0m"
#define YELLOW  "\033[0;33m"
#define MAGENTA "\033[0;35m"
#define RED "\033[0;31m"

#include "ex00/ClapTrap.hpp" //because is in the subfolder ex00

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();                                 // Default Constructor
		ScavTrap(const std::string& name);          // Param Constructor
		ScavTrap(const ScavTrap& other);            // Copy Constructor
		ScavTrap& operator=(const ScavTrap& other); // Assignment operator
		~ScavTrap();

		void attack(const std::string& target); // override
		void guardGate(); // new ability
};

#endif