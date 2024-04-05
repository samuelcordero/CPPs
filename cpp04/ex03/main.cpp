/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:20:29 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/05 16:47:02 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"


int main() {
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());

	ICharacter *me = new Character("me");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete tmp;

	ICharacter *me_cpy = new Character(*(Character *)me);
	ICharacter *bob = new Character("bob");

	me_cpy->use(0, *bob);
	me_cpy->use(1, *bob);
	tmp = me_cpy->getEquip(2);
	me_cpy->unequip(2);
	me_cpy->use(2, *bob);
	me_cpy->equip(tmp);
	me_cpy->use(2, *bob);
	me_cpy->use(24, *bob);
	
	*(Character *)me = *(Character *)bob;
	*(Character *)bob = *(Character *)me_cpy;

	delete src;
	delete me;
	delete me_cpy;
	delete bob;

	return 0;
}