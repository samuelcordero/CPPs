/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:49 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/09 12:07:53 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

const size_t	arr_size = 4;

int	main(int argc, char **argv) {
	(void)argv;
	if (argc > 1) {
		std::cerr << "Invalid args!\n";
		return (1);
	}

	Animal *an_arr[arr_size];
	size_t i = 0;
	for (i = 0; i < arr_size / 2; ++i)
		an_arr[i] = new Dog;
	
	for (; i < arr_size; ++i)
		an_arr[i] = new Cat;

	for (i = 0; i < arr_size; ++i) {
		an_arr[i]->makeSound();
		std::cout << "Type is " << an_arr[i]->getType() << std::endl;
	}

	for (i = 0; i < arr_size; ++i)
		delete an_arr[i];

	Animal *d = new Dog();
	d->think(0, "mmmm");
	d->think(1, "i want a bone");
	d->printMyBrain();

	Animal *d_cpy = new Dog(*(Dog *)d);
	d_cpy->printMyBrain();
	
	delete d;
	delete d_cpy;

	return (0);
}
