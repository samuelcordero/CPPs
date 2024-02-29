/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:12:55 by sacorder          #+#    #+#             */
/*   Updated: 2024/02/29 12:30:05 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	*z;

	z = newZombie("José Luis");
	z->announce();
	randomChump("Raúl Alejandro");
	delete z;
	return (0);
}