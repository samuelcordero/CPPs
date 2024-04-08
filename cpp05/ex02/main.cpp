/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 22:21:29 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/08 13:01:46 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void) {
	std::cout << "-------- SHRUBBERY SIGN-EXEC TEST --------\n";
	try {
		AForm	*shrub = new ShrubberyCreationForm("Manuel");

		std::cout << *shrub;

		Bureaucrat tito("Berni", 1);
		tito.signForm(*shrub);
		tito.executeForm(*shrub);
		delete shrub;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------- -------- --------\n\n";
	std::cout << "-------- ROBOTOMY SIGN-EXEC TEST --------\n";
	try {
		AForm *robotomy = new RobotomyRequestForm("Jorge");
		
		std::cout << *robotomy;

		Bureaucrat tito("Berni", 1);
		tito.signForm(*robotomy);
		tito.executeForm(*robotomy);
		delete robotomy;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------- -------- --------\n\n";
	std::cout << "-------- PARDON SIGN-EXEC TEST --------\n";
	try {
		AForm *pardon = new PresidentialPardonForm("Mar");
		
		std::cout << *pardon;

		Bureaucrat tito("Berni", 1);
		tito.signForm(*pardon);
		tito.executeForm(*pardon);
		delete pardon;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------- -------- --------\n\n";
	/*
	std::cout << "-------- SIGN TEST --------\n";
	{
		Bureaucrat b1;
		Bureaucrat b2 = Bureaucrat("boss", 1);
		Form f = Form("test", 1, 1);
		std::cout << f;
		b1.signForm(f);
		std::cout << f;
		b2.signForm(f);
		std::cout << f;
	}
	std::cout << "-------- -------- --------\n\n"; */
	return (0);
}