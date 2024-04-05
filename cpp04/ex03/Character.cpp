/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 01:06:46 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/05 16:42:19 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	std::cout << "Default character cons\n";
	name = "default";
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
}

Character::Character(const std::string &name) {
	std::cout << "Name character cons\n";
	this->name = name;
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
}

Character::Character(const Character &cp) {
	std::cout << "Copy character cons\n";
	name = cp.name;
	for (int i = 0; i < 4; ++i) {
		if (cp.inventory[i])
			inventory[i] = cp.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
}

Character::~Character() {
	std::cout << "Character dest\n";
	for (int i = 0; i < 4; ++i) {
		if (inventory[i] != NULL)
			delete inventory[i];
	}
}

Character	&Character::operator=(const Character &cp) {
	if (this != &cp) {
		this->name = cp.name;
		for (int i = 0; i < 4; ++i) {
			if (this->inventory[i])
				delete this->inventory[i];
			if (cp.inventory[i])
				this->inventory[i] = cp.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
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
	if (idx < 4 && inventory[idx] != NULL)
		inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 4 && inventory[idx] != NULL)
		inventory[idx]->use(target);
	else
		std::cout << "* stares at " << target.getName() << " with empty hands *\n";
}

AMateria	*Character::getEquip(int idx) const {
	if (idx < 4)
		return (inventory[idx]);
	return (NULL);
}