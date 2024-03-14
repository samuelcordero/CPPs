/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:49 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/14 13:22:06 by sacorder         ###   ########.fr       */
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

	ClapTrap ct;
	ClapTrap ct2("Manolo");
	ScavTrap st;
	ScavTrap st2("Juan");
	FragTrap ft;
	FragTrap ft2("Ana");
	FragTrap ft3(ft2);


	ct.attack("Paquito");
	st.attack("Juanito");
	ft.attack("Sofia");
	ct2.attack("Alfonso");
	st2.attack("Joe");
	ft2.attack("Arnold");
	ft3.attack("Ronaldinho");

	st.guardGate();

	st2 = st;
	st2.guardGate();

	ft.guardGate();

	ft2 = ft;
	ft2.guardGate();

	ft3.guardGate();
	ft3.guardGate();

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
