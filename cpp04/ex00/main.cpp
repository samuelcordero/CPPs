/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:49 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/18 12:30:47 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "wrongAnimal.hpp"
#include "wrongCat.hpp"

int	main(int argc, char **argv) {
	(void)argv;
	if (argc > 1) {
		std::cerr << "Invalid args!\n";
		return (1);
	}

	Animal	animal;
	Cat		cat;
	Dog		dog;

	animal.makeSound();
	animal.printType();
	cat.makeSound();
	cat.printType();
	dog.makeSound();
	dog.printType();

	wrongAnimal	wanimal;
	wrongCat	wcat;

	std::cout << "\nWrong animals tests:\n\n";
	wanimal.makeSound();
	wanimal.printType();
	wcat.makeSound();
	wcat.printType();

	return (0);
}
