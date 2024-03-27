/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:49 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/27 13:49:56 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(int argc, char **argv) {
	(void)argv;
	if (argc > 1) {
		std::cerr << "Invalid args!\n";
		return (1);
	}

	FragTrap ft;
	FragTrap ft2("Ana");
	FragTrap ft3(ft2);

	ft.attack("Sofia");
	ft2.attack("Arnold");
	ft3.attack("Ronaldinho");

	ft2 = ft;

	ft.takeDamage(1);
	ft2.takeDamage(10);
	ft3.takeDamage(100);

	ft.attack("Paquito");
	ft2.attack("Juanito");
	ft3.attack("Alfonso");
	
	ft.beRepaired(1);
	ft2.beRepaired(50);
	ft3.beRepaired(61);
	
	ft.highFiveGuys();
	ft2.highFiveGuys();
	ft3.highFiveGuys();

	return (0);
}
