/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:57 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/10 00:21:04 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Default cons for Animal\n";
	type = "Default type";
}

Animal::Animal(const Animal &cp) {
	std::cout << "Copy cons for Animal\n";
	type = cp.type;
}

Animal::~Animal() { std::cout << "Animal destructor\n"; }

Animal	&Animal::operator=(const Animal &cp) {
	if (&cp != this)
		type = cp.type;
	return (*this);
}

void	Animal::makeSound(void) {
	std::cout << "Default jungle sounds\n";
}

void	Animal::printType(void) {
	std::cout << "Type is " << type << std::endl;
}

void	Animal::printMyBrain(void) {
	std::cout << "Default animal is brainless :(\n";
}

void	Animal::think(int idx, const std::string idea) {
	(void)idx;
	(void)idea;
	std::cout << "Air sounds though an empty space\n";
}

std::string	Animal::getType(void) {
	return (type);
}
