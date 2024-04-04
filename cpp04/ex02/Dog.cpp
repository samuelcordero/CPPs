/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:00:07 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/05 00:39:37 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): AAnimal() {
	std::cout << "Default cons for Dog\n";
	br = new Brain();
	type = "Dog";
}

Dog::Dog(const Dog &cp): AAnimal() {
	std::cout << "Copy cons for Dog\n";
	br = new Brain(*cp.br);
	type = cp.type;
}

Dog::~Dog() {
	std::cout << "Dog destructor\n";
	delete br;
}

Dog	&Dog::operator=(const Dog &cp) {
	if (&cp == this)
		return (*this);
	br = new Brain(*cp.br);
	type = cp.type;
	return (*this);
}

void	Dog::makeSound(void) {
	std::cout << "Woof wooff\n";
}