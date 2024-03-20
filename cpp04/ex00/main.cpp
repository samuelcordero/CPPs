/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:49 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/20 15:16:22 by sacorder         ###   ########.fr       */
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

	Animal	*cat = new Cat();
	Animal	*dog = new Dog();

	cat->makeSound();
	cat->printType();
	dog->makeSound();
	dog->printType();
	
	delete cat;
	delete dog;

	std::cout << "\nWrong animals tests:\n\n";

	wrongCat	*wcat = new wrongCat();

	wcat->makeSound();
	wcat->printType();
	
	delete wcat;

	return (0);
}
