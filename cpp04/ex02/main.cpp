/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:49 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/05 00:39:09 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

const size_t	arr_size = 4;

int	main(int argc, char **argv) {
	(void)argv;
	if (argc > 1) {
		std::cerr << "Invalid args!\n";
		return (1);
	}

	AAnimal *an_arr[arr_size];
	size_t i = 0;
	for (i = 0; i < arr_size / 2; ++i)
		an_arr[i] = new Dog;
	
	for (; i < arr_size; ++i)
		an_arr[i] = new Cat;

	for (i = 0; i < arr_size; ++i) {
		an_arr[i]->makeSound();
		an_arr[i]->getType();
	}

	for (i = 0; i < arr_size; ++i)
		delete an_arr[i];
	
	return (0);
}
