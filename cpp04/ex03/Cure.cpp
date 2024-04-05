/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 00:53:37 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/05 16:45:40 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") { std::cout << "2. Default Cure cons\n"; }

Cure::Cure(const Cure &cp): AMateria(cp.getType()) { std::cout << "2. Copy Cure cons\n"; }

Cure::~Cure() { std::cout << "2. Cure dest\n"; }

Cure	&Cure::operator=(const Cure &cp) {
	if (this == &cp)
		return (*this);
	return (*this);
}

AMateria*	Cure::clone() const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
