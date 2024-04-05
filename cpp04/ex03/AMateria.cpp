/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 00:40:56 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/05 13:43:06 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "Default AMateria cons\n";
	type = "default";
}

AMateria::AMateria(std::string const &type) {
	std::cout << "Type AMateria cons\n";
	this->type = type;
}

AMateria::~AMateria() { std::cout << "Default AMateria dest\n"; }

std::string const	&AMateria::getType() const {
	return (type);
}

void	AMateria::use(ICharacter &target) {
	std::cout << "Default materia has no effect on " << target.getName() << std::endl;
}
