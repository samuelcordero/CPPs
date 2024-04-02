/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:05:20 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/02 11:46:45 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	std::cout << "Default constructor for FragTrap\n";
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(const std::string name): ClapTrap(name) {
	std::cout << "Name constructor for FragTrap\n";
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &cp): ClapTrap() {
	std::cout << "Copy constructor for FragTrap\n";
	hit_points = cp.hit_points;
	energy_points = cp.energy_points;
	attack_damage = cp.attack_damage;
	name = cp.name;
}

FragTrap::~FragTrap() { std::cout << "Destructor for FragTrap\n"; }

FragTrap	&FragTrap::operator=(const FragTrap &cp) {
	if (&cp == this)
		return (*this);
	hit_points = cp.hit_points;
	energy_points = cp.energy_points;
	attack_damage = cp.attack_damage;
	name = cp.name;
	return (*this);
}

void	FragTrap::highFiveGuys(void) {
	if (energy_points > 0 && hit_points > 0) {
		std::cout << "High five bros!!!\n";
		--energy_points;
	}
	else
		std::cout << "Help me pls >:(\n";
}

void	FragTrap::attack(const std::string &target) {
	if (energy_points > 0 && hit_points > 0) {
		std::cout << "FragTrap " << name << " attacks " << target
			<< ", causing " << attack_damage << " points of damage!\n";
		--energy_points;
	} else {
		std::cout << name << " cannot attack!\n";
	}
}
