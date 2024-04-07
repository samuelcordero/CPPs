/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 23:18:46 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/08 00:17:14 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("default form"), sign_grade(150), exec_grade(150) {
	std::cout << "Default form cons\n";
	is_signed = false;
}

Form::Form(const Form &other): name(other.name), sign_grade(other.sign_grade), exec_grade(other.exec_grade) {
	std::cout << "Copy form cons\n";
	is_signed = other.is_signed;
}

Form::Form(const std::string name, const int sign_grade, const int exec_grade): name(name), sign_grade(sign_grade), exec_grade(exec_grade) {
	std::cout << "Param form cons\n";
	if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
	if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	is_signed = false;
}

Form::~Form() { std::cout << "Form dest\n"; }

Form	&Form::operator=(const Form &other) {
	if (this != &other)
		return (*this);
	return (*this);
}

const std::string	Form::getName() const { return (name); }

bool	Form::getSigned() const { return (is_signed); }

int	Form::getSignGrade() const { return (sign_grade); }

int	Form::getExecGrade() const { return (exec_grade); }

void	Form::beSigned(const Bureaucrat &b) {
	if (b.getGrade() <= sign_grade)
		is_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &out, const Form &other) {
	out << "Form " << other.getName() << ", sign grade "
		<< other.getSignGrade() << ", exec grade " << other.getExecGrade();
	if (other.getSigned())
		out << ";signed\n";
	else
		out << ";not signed\n";
	return (out);
}
