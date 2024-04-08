/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:58:59 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/08 12:49:15 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("default ShrubberyCreationForm", 145, 137) {
	std::cout << "Default ShrubberyCreationForm cons\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name): AForm(name, 145, 137) {
	std::cout << "Param ShrubberyCreationForm cons\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): AForm(other.getName(), 145, 137) {
	std::cout << "Copy ShrubberyCreationForm cons\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm() { std::cout << "ShrubberyCreationForm dest\n"; }

void	ShrubberyCreationForm::execute(const Bureaucrat &b) const {
	if (b.getGrade() <= this->getExecGrade() && this->getSigned()) {
		std::ofstream	of;
		std::string		tmp = this->getName() + "_shrubbery";
		of.open(tmp.c_str());
		if (!of.is_open()) {
			std::cerr << tmp << ": couldn't create shrubbery outfile\n";
			return ;
		}
		of << shrub;
		of.close();
	}
	else
		throw GradeTooLowException();
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	if (this != &other) {
		return (*this);
	}
	return (*this);
}
