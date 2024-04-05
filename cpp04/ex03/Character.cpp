/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 01:06:46 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/05 12:52:05 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	std::cout << "Default character cons\n";
	name = "default";
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
}

Character::Character(const Character &cp) {
	std::cout << "Copy character cons\n";
	name = cp.name;
	//todo copy invent in correct order
}

Character::~Character() {
	std::cout << "Default character dest\n";
	for (int i = 0; i < 4; ++i) {
		if (inventory[i] != NULL)
			delete inventory[i];
	}
}

Character	&Character::operator=(const Character &cp) {
	if (this != &cp) {
		name = cp.name;
		//todo copy inventory correctly;
	}
	return (*this);
}

std::string const	&Character::getName() const { return (name); }

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; ++i) {
		if (inventory[i] == NULL) {
			inventory[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx) {
	if (inventory[idx] != NULL)
		inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {
	if (inventory[idx] != NULL)
		inventory[idx]->use(target);
}