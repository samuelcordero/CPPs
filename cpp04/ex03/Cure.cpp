/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 00:53:37 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/05 01:03:21 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("Cure") { std::cout << "Default Cure cons\n"; }

Cure::Cure(const Cure &cp): AMateria("Cure") { std::cout << "Copy Cure cons\n"; }

Cure::~Cure() { std::cout << "Default Cure des\n"; }

Cure	&Cure::operator=(const Cure &cp) {
	if (this == &cp)
		return (*this);
	return (*this);
}

AMateria*	Cure::clone() const {
	return (new Cure(*this));
}