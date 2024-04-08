/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:40:17 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/08 14:06:36 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() { std::cout << "default intern cons\n"; }

Intern::Intern(const Intern &other) {
	std::cout << "copy intern cons\n";
	(void) other;
}

Intern::~Intern() { std::cout << "Intern dest\n"; }

Intern	&Intern::operator=(const Intern &other) {
	if (this != &other)
		return (*this);
	return (*this);
}

AForm	*Intern::makeForm(const std::string name, const std::string target) {
	const std::string	types[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	typedef AForm		*(*FormCons)(const std::string);
	FormCons cons[3] = {
		&PresidentialPardonForm::createInstance,
		&RobotomyRequestForm::createInstance,
		&ShrubberyCreationForm::createInstance
	};
	for (int i = 0; i < 3; ++i) {
		if (types[i] == name)
			return ((cons[i])(target));
	}
	std::cout << "Error: intern didn't find matching form\n";
	return (NULL);
}
