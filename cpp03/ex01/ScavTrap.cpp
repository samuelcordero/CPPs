/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:15:28 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/02 11:47:13 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "Default constructor for ScavTrap\n";
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	guard_mode = false;
}

ScavTrap::ScavTrap(const std::string name): ClapTrap(name) {
	std::cout << "Name constructor for ScavTrap\n";
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	guard_mode = false;
}

ScavTrap::ScavTrap(const ScavTrap &cp): ClapTrap() {
	std::cout << "Copy constructor for ScavTrap\n";
	name = (cp.name);
	hit_points = (cp.hit_points);
	energy_points = (cp.energy_points);
	attack_damage = (cp.attack_damage);
	guard_mode = cp.guard_mode;
}

ScavTrap::~ScavTrap() { std::cout << "Destructor for ScavTrap\n"; }

ScavTrap	&ScavTrap::operator=(const ScavTrap &cp) {
	if (&cp == this)
		return (*this);
	name = (cp.name);
	hit_points = (cp.hit_points);
	energy_points = (cp.energy_points);
	attack_damage = (cp.attack_damage);
	guard_mode = cp.guard_mode;
	return (*this);
}

void	ScavTrap::guardGate() {
	if (guard_mode)
		std::cout << "ScavTrap " << name << " is already in gate keeper mode\n";
	else {
		guard_mode = true;
		std::cout << "ScavTrap " << name << " is now in gate keeper mode\n";
	}
}

void	ScavTrap::attack(const std::string &target) {
	if (energy_points > 0 && hit_points > 0) {
		std::cout << "ScavTrap " << name << " attacks " << target
			<< ", causing " << attack_damage << " points of damage!\n";
		--energy_points;
	} else {
		std::cout << name << " cannot attack!\n";
	}
}

void	ScavTrap::setGuardMode(bool mode) {
	guard_mode = mode;
}

bool	ScavTrap::getGuardMode(void) const {
	return (guard_mode);
}
