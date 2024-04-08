/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 22:21:29 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/08 14:12:37 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main(void) {
	std::cout << "-------- ROBOTOMY SIGN-EXEC TEST --------\n";
	try {
		AForm *robotomy;
		

		Bureaucrat	b("Carmen", 1);
		Intern		mike;

		robotomy = mike.makeForm("robotomy request", "Louis");
		std::cout << *robotomy;
		b.signForm(*robotomy);
		b.executeForm(*robotomy);
		delete robotomy;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------- -------- --------\n\n";
	std::cout << "-------- UNKNOWN SIGN-EXEC TEST --------\n";
	try {
		AForm *robotomy;
		

		Bureaucrat	b("Carmen", 1);
		Intern		mike;

		robotomy = mike.makeForm("UNKNOWN", "Louis");
		if (robotomy) {
			std::cout << *robotomy;
			b.signForm(*robotomy);
			b.executeForm(*robotomy);
			delete robotomy;
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------- -------- --------\n\n";
	return (0);
}