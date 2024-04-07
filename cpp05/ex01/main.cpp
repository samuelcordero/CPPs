/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 22:21:29 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/08 00:24:16 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main(void) {
	std::cout << "-------- GRADE TOO LOW FORM CONS TEST --------\n";
	try {
		Form def_form;
		std::cout << def_form;
		
		Form form = Form("Test", 120, 30);
		std::cout << form;

		Form excep = Form("noo", 0, 151);
		std::cout << excep;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------- -------- --------\n\n";
	std::cout << "-------- GRADE TOO HIGH FORM CONS TEST --------\n";
	try {
		Form excep = Form("noo", 0, 130);
		std::cout << excep;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------- -------- --------\n\n";
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
	std::cout << "-------- -------- --------\n\n";
	return (0);
}