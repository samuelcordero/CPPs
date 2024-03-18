/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:57 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/18 12:13:24 by sacorder         ###   ########.fr       */
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
	if (&cp == this)
		return (*this);
	type = cp.type;
	return (*this);
}

void	Animal::makeSound(void) {
	std::cout << "Default jungle sounds\n";
}

void	Animal::printType(void) {
	std::cout << "Type is " << type << std::endl;
}

std::string	Animal::getType(void) {
	return (type);
}
