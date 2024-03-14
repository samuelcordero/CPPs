/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:05:20 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/14 13:31:26 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ScavTrap() {
	std::cout << "Default constructor for FragTrap\n";
	setAttackDamage(30);
	setEnergyPoints(100);
	setHitPoints(100);
}

FragTrap::FragTrap(const std::string name): ScavTrap(name) {
	std::cout << "Name constructor for FragTrap\n";
	setAttackDamage(30);
	setEnergyPoints(100);
	setHitPoints(100);
}

FragTrap::FragTrap(const FragTrap &cp): ScavTrap() {
	std::cout << "Copy constructor for FragTrap\n";
	setAttackDamage(cp.getAttackDamage());
	setEnergyPoints(cp.getEnergyPoints());
	setName(cp.getName());
	setHitPoints(cp.getHitPoints());
	setGuardMode(cp.getGuardMode());
}

FragTrap::~FragTrap() { std::cout << "Destructor for FragTrap\n"; }

FragTrap	&FragTrap::operator=(const FragTrap &cp) {
	if (&cp == this)
		return (*this);
	setAttackDamage(cp.getAttackDamage());
	setEnergyPoints(cp.getEnergyPoints());
	setName(cp.getName());
	setHitPoints(cp.getHitPoints());
	setGuardMode(cp.getGuardMode());
	return (*this);
}

void	FragTrap::highFiveGuys(void) {
	std::cout << "High five bros!!!\n";
}

void	FragTrap::attack(const std::string &target) {
	if (getEnergyPoints() > 0 && getHitPoints() > 0) {
		std::cout << "FragTrap " << getName() << " attacks " << target
			<< ", causing " << getAttackDamage() << " points of damage!\n";
		setEnergyPoints(getEnergyPoints() - 1);
	} else {
		std::cout << getName() << " cannot attack!\n";
	}
}
