/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:49 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/09 11:44:10 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
	std::cout << "Type is " << cat->getType() << std::endl;
	dog->makeSound();
	std::cout << "Type is " << dog->getType() << std::endl;
	
	delete cat;
	delete dog;

	std::cout << "\nWrong animals tests:\n\n";

	wrongAnimal	*wcat = new wrongCat();

	wcat->makeSound();
	std::cout << "Type is " << wcat->getType() << std::endl;
	
	delete wcat;

	return (0);
}
