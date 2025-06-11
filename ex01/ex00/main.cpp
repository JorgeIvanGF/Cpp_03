/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 19:51:41 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/11 16:28:14 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << MAGENTA << "\n--- Construction of ClapTraps ---\n" << RESET;
	ClapTrap a("Aldo");
	ClapTrap b("Bravo");

	std::cout << MAGENTA << "\n--- Initial Status ---\n" << RESET;
	a.status();
	b.status();
		
	std::cout << MAGENTA << "\n--- Test 1: Basic attack ---\n" << RESET;
	a.attack("Bravo");

	std::cout << MAGENTA << "\n--- Test 2: Take damage ---\n" << RESET;
	b.takeDamage(5);
	b.status();

	std::cout << MAGENTA << "\n--- Test 3: Repair ---\n" << RESET;
	b.beRepaired(3);

	std::cout << MAGENTA << "\n--- Test 4: No energy attack ---\n" << RESET;
	for (int i = 0; i < 11; ++i)
		a.attack("Bravo");

	std::cout << MAGENTA << "\n--- Test 5: No HitPoints repair ---\n" << RESET;
	b.takeDamage(100);  // Should bring HP to 0
	b.beRepaired(10);   // Should not repair

	std::cout << MAGENTA << "\n--- Test 6: Copy constructor and assignment ---\n" << RESET;
	ClapTrap c = a;         // Calls copy constructor
	ClapTrap d;             // Default constructor
	d = b;                  // Calls copy assignment operator

	std::cout << MAGENTA << "\nEnd of main\n" << RESET;

	return 0;
}