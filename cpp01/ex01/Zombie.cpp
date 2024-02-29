/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:13:00 by sacorder          #+#    #+#             */
/*   Updated: 2024/02/29 12:42:56 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	name = "default";
}

Zombie::Zombie(std::string name) {
	this->name = name;
	std::cout << "Zombie " << name << " construido\n";
}

Zombie::~Zombie(void) {
	std::cout << "Zombie " << name << " destruido\n";
}

void	Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
