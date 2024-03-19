/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:12:55 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/19 13:38:08 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

const int	horde_size = 8;

int	main(void) {
	Zombie	*z = zombieHorde(horde_size, "JV, Jovani Vázquez");

	for (int i = 0; i < horde_size; ++i)
		z[i].announce();
	
	delete[] z;
	return (0);
}