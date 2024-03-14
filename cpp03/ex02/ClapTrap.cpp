/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:57 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/14 13:29:06 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default constructor for ClapTrap\n";
	name = "Default name";
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(const std::string name) {
	std::cout << "Name constructor for ClapTrap\n";
	this->name = name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &cp) {
	std::cout << "Copy constructor for ClapTrap\n";
	name = cp.name;
	hit_points = cp.hit_points;
	energy_points = cp.energy_points;
	attack_damage = cp.attack_damage;
}

ClapTrap::~ClapTrap() { std::cout << "Destructor for ClapTrap\n"; }

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

std::string	ClapTrap::getName(void) const {
	return (name);
}

int	ClapTrap::getHitPoints(void) const {
	return (hit_points);
}

int	ClapTrap::getEnergyPoints(void) const {
	return (energy_points);
}

int	ClapTrap::getAttackDamage(void) const {
	return (attack_damage);
}

void	ClapTrap::setAttackDamage(int val) {
	attack_damage = val;
}

void	ClapTrap::setEnergyPoints(int val) {
	energy_points = val;
}

void	ClapTrap::setHitPoints(int val) {
	hit_points = val;
}

void ClapTrap::setName(std::string name) {
	this->name = name;
}
