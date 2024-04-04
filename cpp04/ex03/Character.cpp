/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 01:06:46 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/05 01:15:49 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	std::cout << "Default character cons\n";
	name = "default";
}

Character::Character(const Character &cp) {
	std::cout << "Copy character cons\n";
	name = cp.name;
	//todo copy invent in correct order
}

Character::~Character() {
	std::cout << "Default character dest\n";
	//todo destroy materias
}

Character	&Character::operator=(const Character &cp) {
	if (this != &cp) {
		name = cp.name;
		//todo copy inventory correctly;
	}
	return (*this);
}
