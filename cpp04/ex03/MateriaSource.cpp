/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 01:19:57 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/05 12:40:11 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; ++i)
		known_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &cp) {
	for (int i = 0; i < 4; ++i)
		known_materias[i] = cp.known_materias[i];
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		if (known_materias[i])
			delete known_materias[i];
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &cp) {
	if (this != &cp) {
		for (int i = 0; i < 4; ++i)
			known_materias[i] = cp.known_materias[i];
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m) {

}

AMateria	*MateriaSource::createMateria(std::string const & type) {

}
