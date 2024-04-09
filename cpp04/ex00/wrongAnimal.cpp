/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:57 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/18 12:13:24 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.hpp"

wrongAnimal::wrongAnimal() {
	std::cout << "Default cons for wrongAnimal\n";
	type = "Default wrong type";
}

wrongAnimal::wrongAnimal(const wrongAnimal &cp) {
	std::cout << "Copy cons for wrongAnimal\n";
	type = cp.type;
}

wrongAnimal::~wrongAnimal() { std::cout << "wrongAnimal destructor\n"; }

wrongAnimal	&wrongAnimal::operator=(const wrongAnimal &cp) {
	if (&cp == this)
		return (*this);
	type = cp.type;
	return (*this);
}

void	wrongAnimal::makeSound(void) {
	std::cout << "Default jungle sounds\n";
}

std::string	wrongAnimal::getType(void) {
	return (type);
}
