/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 00:40:56 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/05 16:45:21 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "1. Default AMateria cons\n";
	type = "default";
}

AMateria::AMateria(std::string const &type) {
	std::cout << "1. Type AMateria cons\n";
	this->type = type;
}

AMateria::~AMateria() { std::cout << "1. AMateria dest\n"; }

std::string const	&AMateria::getType() const {
	return (type);
}

void	AMateria::use(ICharacter &target) {
	std::cout << "Default materia has no effect on " << target.getName() << std::endl;
}
