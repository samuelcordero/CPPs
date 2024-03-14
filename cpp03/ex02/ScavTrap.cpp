/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:15:28 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/14 13:32:07 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "Default constructor for ScavTrap\n";
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	guard_mode = false;
}

ScavTrap::ScavTrap(const std::string name): ClapTrap(name) {
	std::cout << "Name constructor for ScavTrap\n";
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	guard_mode = false;
}

ScavTrap::ScavTrap(const ScavTrap &cp): ClapTrap() {
	std::cout << "Copy constructor for ScavTrap\n";
	setName(cp.getName());
	setHitPoints(cp.getHitPoints());
	setEnergyPoints(cp.getEnergyPoints());
	setAttackDamage(cp.getAttackDamage());
	guard_mode = cp.guard_mode;
}

ScavTrap::~ScavTrap() { std::cout << "Destructor for ScavTrap\n"; }

ScavTrap	&ScavTrap::operator=(const ScavTrap &cp) {
	if (&cp == this)
		return (*this);
	guard_mode = cp.guard_mode;
	setName(cp.getName());
	setHitPoints(cp.getHitPoints());
	setEnergyPoints(cp.getEnergyPoints());
	setAttackDamage(cp.getAttackDamage());
	return (*this);
}

void	ScavTrap::guardGate() {
	if (guard_mode)
		std::cout << "ScavTrap " << getName() << " is already in gate keeper mode\n";
	else {
		guard_mode = true;
		std::cout << "ScavTrap " << getName() << " is now in gate keeper mode\n";
	}
}

void	ScavTrap::attack(const std::string &target) {
	if (getEnergyPoints() > 0 && getHitPoints() > 0) {
		std::cout << "ScavTrap " << getName() << " attacks " << target
			<< ", causing " << getAttackDamage() << " points of damage!\n";
		setEnergyPoints(getEnergyPoints() - 1);
	} else {
		std::cout << getName() << " cannot attack!\n";
	}
}

void	ScavTrap::setGuardMode(bool mode) {
	guard_mode = mode;
}

bool	ScavTrap::getGuardMode(void) const {
	return (guard_mode);
}
