/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:00:07 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/10 00:22:23 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal() {
	std::cout << "Default cons for Dog\n";
	br = new Brain();
	type = "Dog";
}

Dog::Dog(const Dog &cp): Animal() {
	std::cout << "Copy cons for Dog\n";
	br = new Brain(*cp.br);
	type = cp.type;
}

Dog::~Dog() {
	std::cout << "Dog destructor\n";
	delete br;
}

Dog	&Dog::operator=(const Dog &cp) {
	if (&cp != this) {
		delete br;
		br = new Brain(*cp.br);
		type = cp.type;
	}
	return (*this);
}

void	Dog::makeSound(void) {
	std::cout << "Woof wooff\n";
}

void	Dog::printMyBrain() { br->printBrain(); }

void	Dog::think(int idx, const std::string idea) { br->setIdea(idx, idea); }
