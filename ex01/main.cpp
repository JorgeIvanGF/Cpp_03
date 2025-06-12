/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:52:26 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/12 15:17:59 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	std::cout << MAGENTA << "\nCreation of Scav:\n" << RESET;
	ScavTrap scav("Serena");
	
	std::cout << MAGENTA << "\nInitial status:\n" << RESET;
	scav.status();
	std::cout << MAGENTA << "\nAttack Test:\n" << RESET;
	scav.attack("Enemy");
	std::cout << MAGENTA << "\nTake Damage Test:\n" << RESET;
	scav.takeDamage(30);
	std::cout << MAGENTA << "\nBe Repaired Test:\n" << RESET;
	scav.beRepaired(20);
	std::cout << MAGENTA << "\nGuard Gate Test:\n" << RESET;
	scav.guardGate();
	std::cout << MAGENTA << "\nFinal status:\n" << RESET;
	scav.status();
	std::cout << MAGENTA << "\nDestruction of Scav:\n" << RESET;


	return 0;
}