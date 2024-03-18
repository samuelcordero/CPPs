/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:00:04 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/18 12:09:15 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
	std::cout << "Default cons for Cat\n";
	type = "Cat";
}

Cat::Cat(const Cat &cp): Animal() {
	std::cout << "Copy cons for Cat\n";
	type = cp.type;
}

Cat::~Cat() { std::cout << "Cat destructor\n"; }

Cat	&Cat::operator=(const Cat &cp) {
	if (&cp == this)
		return (*this);
	type = cp.type;
	return (*this);
}

void	Cat::makeSound(void) {
	std::cout << "Miau miauu\n";
}