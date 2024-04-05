/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 00:51:02 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/05 12:47:54 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") { std::cout << "Default Ice cons\n"; }

Ice::Ice(const Ice &cp): AMateria("ice") { std::cout << "Copy Ice cons\n"; }

Ice::~Ice() { std::cout << "Default Ice des\n"; }

Ice	&Ice::operator=(const Ice &cp) {
	if (this == &cp)
		return (*this);
	return (*this);
}

AMateria*	Ice::clone() const {
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
