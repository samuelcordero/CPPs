/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:56:06 by sacorder          #+#    #+#             */
/*   Updated: 2024/02/29 13:36:00 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) {
	this->name = name;
	this->weapon = &weapon;
	std::cout << "Human " << name << " created\n";
}

HumanA::~HumanA() {
	std::cout << "Human " << name << " destroyed\n";
}

void	HumanA::attack(void) {
	std::cout << name << " attacks with their " << weapon->getType() << "\n";
}
