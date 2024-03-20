/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:57 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/06 13:10:58 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	name = "Default name";
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(const std::string name) {
	this->name = name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &cp) {
	name = cp.name;
	hit_points = cp.hit_points;
	energy_points = cp.energy_points;
	attack_damage = cp.attack_damage;
}

ClapTrap::~ClapTrap() {}

ClapTrap	&ClapTrap::operator=(const ClapTrap &cp) {
	if (&cp == this)
		return (*this);
	name = cp.name;
	hit_points = cp.hit_points;
	energy_points = cp.energy_points;
	attack_damage = cp.attack_damage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	if (energy_points > 0 && hit_points > 0) {
		std::cout << "ClapTrap " << name << " attacks " << target
			<< ", causing " << attack_damage << " points of damage!\n";
		--energy_points;
	} else {
		std::cout << name << " cannot attack!\n";
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (energy_points > 0 && hit_points > 0) {
		hit_points -= amount;
	} else {
		std::cout << name << " is already dead!\n";
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (energy_points > 0 && hit_points > 0) {
		hit_points += amount;
		--energy_points;
	} else {
		std::cout << name << " cannot be repaired!\n";
	}
}