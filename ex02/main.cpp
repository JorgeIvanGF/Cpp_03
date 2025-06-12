/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:55:02 by jorgutie          #+#    #+#             */
/*   Updated: 2025/06/12 18:00:45 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	std::cout << MAGENTA << "\nCreation of FragTrap:\n" << RESET;
	FragTrap ft("Flexo");	
	std::cout << MAGENTA << "\nInitial status:\n" << RESET;
	ft.status();
	std::cout << MAGENTA << "\nAttack Test:\n" << RESET;
	ft.attack("Zoidberg");
	std::cout << MAGENTA << "\nTake Damage Test:\n" << RESET;
	ft.takeDamage(50);
	std::cout << MAGENTA << "\nBe Repaired Test:\n" << RESET;
	ft.beRepaired(30);
	std::cout << MAGENTA << "\nHive Fives Test:\n" << RESET;
	ft.highFivesGuys();
	std::cout << MAGENTA << "\nFinal status:\n" << RESET;
	ft.status();
	std::cout << MAGENTA << "\nDestruction of Frag:\n" << RESET;

	return 0;
}