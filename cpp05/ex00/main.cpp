/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 22:21:29 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/07 23:16:43 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void) {
	{
		std::cout << "-------- GRADE TOO LOW DEC TEST --------\n";
		try {
			Bureaucrat default_test;

			std::cout << default_test;
			std::cout << ++default_test;
			std::cout << --default_test;
			std::cout << default_test--;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << "-------- -------- -------- --------\n\n";
	} {
		std::cout << "-------- GRADE TOO HIGH INC TEST --------\n";
		try {
			Bureaucrat another_test = Bureaucrat("Juan", 2);

			std::cout << another_test;
			std::cout << --another_test;
			std::cout << ++another_test;
			std::cout << another_test++;
			std::cout << another_test;
			std::cout << ++another_test;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << "-------- -------- -------- --------\n\n";
	} {
		std::cout << "-------- GRADE TOO HIGH CONS TEST --------\n";
		try {
			Bureaucrat another_test = Bureaucrat("Juan", 0);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << "-------- -------- -------- --------\n\n";
	} {
		std::cout << "-------- GRADE TOO HIGH LOW TEST --------\n";
		try {
			Bureaucrat another_test = Bureaucrat("Juan", 151);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << "-------- -------- -------- --------\n\n";
	}

	return (0);
}