/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:49 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/27 13:42:07 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(int argc, char **argv) {
	(void)argv;
	if (argc > 1) {
		std::cerr << "Invalid args!\n";
		return (1);
	}

	ScavTrap st;
	ScavTrap st2("Raquel");
	ScavTrap st3(st2);

	st.attack("Juanito");
	st2.attack("Joe");
	st3.attack("Ana");

	st.guardGate();

	st2 = st;
	st2.guardGate();

	st3.guardGate();
	st3.guardGate();

	st.takeDamage(1);
	st2.takeDamage(10);
	st3.takeDamage(100);

	st.attack("Paquito");
	st2.attack("Juanito");
	st3.attack("Alfonso");
	
	st.beRepaired(1);
	st2.beRepaired(50);
	st3.beRepaired(61);

	return (0);
}
