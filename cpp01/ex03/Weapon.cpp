/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:56:15 by sacorder          #+#    #+#             */
/*   Updated: 2024/02/29 13:09:53 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
	std::cout << "Weapon " << type << " created\n";
}

Weapon::~Weapon() {
	std::cout << "Weapon " << type << " destroyed\n";
}

void	Weapon::setType(std::string type) {
	std::cout << "Weapon " << this->type << " changes type to " << type << "\n";
	this->type = type;
}

const std::string	&Weapon::getType(void) {
	const std::string &typeREF = type;

	return (typeREF);
}
