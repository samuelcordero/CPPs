/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:49 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/06 13:18:07 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(int argc, char **argv) {
	(void)argv;
	if (argc > 1) {
		std::cerr << "Invalid args!\n";
		return (1);
	}

	ClapTrap trap;
	ClapTrap trap2("Manolo");
	ClapTrap trap3(trap);


	trap.attack("Paquito");
	trap2.attack("Juanito");
	trap3.attack("Alfonso");

	trap.takeDamage(1);
	trap2.takeDamage(10);
	trap3.takeDamage(11);

	trap.attack("Paquito");
	trap2.attack("Juanito");
	trap3.attack("Alfonso");
	
	trap.beRepaired(1);
	trap2.beRepaired(10);
	trap3.beRepaired(11);

	return (0);
}
