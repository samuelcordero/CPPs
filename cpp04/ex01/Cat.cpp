/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:00:04 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/09 13:10:02 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
	std::cout << "Default cons for Cat\n";
	br = new Brain;
	type = "Cat";
}

Cat::Cat(const Cat &cp): Animal() {
	std::cout << "Copy cons for Cat\n";
	br = new Brain(*cp.br);
	type = cp.type;
}

Cat::~Cat() {
	std::cout << "Cat destructor\n";
	delete br;
}

Cat	&Cat::operator=(const Cat &cp) {
	if (&cp == this)
		return (*this);
	br = new Brain(*cp.br);
	type = cp.type;
	return (*this);
}

void	Cat::makeSound(void) {
	std::cout << "Miau miauu\n";
}

void	Cat::printMyBrain() { br->printBrain(); }

void	Cat::think(int idx, const std::string idea) { br->setIdea(idx, idea); }
