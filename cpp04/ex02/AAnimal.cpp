/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:57 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/18 12:13:24 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "Default cons for AAnimal\n";
	type = "Default type";
}

AAnimal::AAnimal(const AAnimal &cp) {
	std::cout << "Copy cons for AAnimal\n";
	type = cp.type;
}

AAnimal::~AAnimal() { std::cout << "AAnimal destructor\n"; }

AAnimal	&AAnimal::operator=(const AAnimal &cp) {
	if (&cp != this)
		type = cp.type;
	return (*this);
}

void	AAnimal::printType(void) {
	std::cout << "Type is " << type << std::endl;
}

void	AAnimal::printMyBrain(void) {
	std::cout << "Default animal is brainless :(\n";
}

void	AAnimal::think(int idx, const std::string idea) {
	(void)idx;
	(void)idea;
	std::cout << "Air sounds though an empty space\n";
}

std::string	AAnimal::getType(void) {
	return (type);
}
