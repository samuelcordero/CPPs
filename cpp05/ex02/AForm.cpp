/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 23:18:46 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/08 12:48:28 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name("default Aform"), sign_grade(150), exec_grade(150) {
	std::cout << "Default Aform cons\n";
	is_signed = false;
}

AForm::AForm(const AForm &other): name(other.name), sign_grade(other.sign_grade), exec_grade(other.exec_grade) {
	std::cout << "Copy Aform cons\n";
	is_signed = other.is_signed;
}

AForm::AForm(const std::string name, const int sign_grade, const int exec_grade): name(name), sign_grade(sign_grade), exec_grade(exec_grade) {
	std::cout << "Param Aform cons\n";
	if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
	if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	is_signed = false;
}

AForm::~AForm() { std::cout << "AForm dest\n"; }

AForm	&AForm::operator=(const AForm &other) {
	if (this != &other)
		return (*this);
	return (*this);
}

const std::string	AForm::getName() const { return (name); }

bool	AForm::getSigned() const { return (is_signed); }

int	AForm::getSignGrade() const { return (sign_grade); }

int	AForm::getExecGrade() const { return (exec_grade); }

void	AForm::beSigned(const Bureaucrat &b) {
	if (b.getGrade() <= sign_grade)
		is_signed = true;
	else
		throw GradeTooLowException();
}

void	AForm::execute(const Bureaucrat &b) const {
	if (b.getGrade() <= exec_grade && is_signed)
		return ;
	throw GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &out, const AForm &other) {
	out << "AForm " << other.getName() << ", sign grade "
		<< other.getSignGrade() << ", exec grade " << other.getExecGrade();
	if (other.getSigned())
		out << ";signed\n";
	else
		out << ";not signed\n";
	return (out);
}
