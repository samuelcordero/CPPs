/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:00:07 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/18 12:09:11 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal() {
	std::cout << "Default cons for Dog\n";
	type = "Dog";
}

Dog::Dog(const Dog &cp): Animal() {
	std::cout << "Copy cons for Dog\n";
	type = cp.type;
}

Dog::~Dog() { std::cout << "Dog destructor\n"; }

Dog	&Dog::operator=(const Dog &cp) {
	if (&cp == this)
		return (*this);
	type = cp.type;
	return (*this);
}

void	Dog::makeSound(void) {
	std::cout << "Woof wooff\n";
}