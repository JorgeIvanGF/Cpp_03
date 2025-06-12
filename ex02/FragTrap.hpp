/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:40:39 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/12 17:05:26 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

// Colors
#define RESET   "\033[0m"
#define YELLOW  "\033[0;33m"
#define MAGENTA "\033[0;35m"
#define RED     "\033[0;31m"

#include "ex00/ClapTrap.hpp" // Including the Parent Class Header

class FragTrap : public ClapTrap
{
	public:
		FragTrap(); 								// Default constructor
		FragTrap(const std::string& name); 			// Param Constructor
		FragTrap(const FragTrap& other);			// Copy Constructor
		FragTrap& operator=(const FragTrap& other); // Assignment operator
		~FragTrap();								// Destructor

		// Methods
		void attack(const std::string& target);		// Override Attack
		void highFivesGuys();						// Unique method
		
};

#endif