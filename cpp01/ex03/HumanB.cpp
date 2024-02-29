/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:58:05 by sacorder          #+#    #+#             */
/*   Updated: 2024/02/29 13:36:07 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
	weapon = NULL;
	std::cout << "Human " << name << " created\n";
}

HumanB::~HumanB() {
	std::cout << "Human " << name << " destroyed\n";
}

void	HumanB::attack(void) {
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << "\n";
	else
		std::cout << name << " attack with his empty hands\n";
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}
