/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 22:21:33 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/07 22:58:24 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default") {
	std::cout << "Default bureaucrat cons\n";
	grade = 150;
}

Bureaucrat::Bureaucrat(const std::string name, const unsigned int grade): name(name) {
	std::cout << "Param bureaucrat cons\n";
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other): name(other.name) {
	std::cout << "Copy bureaucrat cons\n";
	this->grade = other.grade;
}

Bureaucrat::~Bureaucrat() { std::cout << "Bureaucrat dest\n"; }

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other) {
	if (this != &other)
		this->grade = other.grade;
	return (*this);
}

Bureaucrat	&Bureaucrat::operator++() {
	if (grade == 1)
		throw GradeTooHighException();
	--grade;
	return (*this);
}

Bureaucrat	&Bureaucrat::operator--() {
	if (grade == 150)
		throw GradeTooLowException();
	++grade;
	return (*this);
}

Bureaucrat	Bureaucrat::operator++(int) {
	Bureaucrat tmp = *this;
	if (grade == 1)
		throw GradeTooHighException();
	--grade;
	return (tmp);
}

Bureaucrat	Bureaucrat::operator--(int) {
	Bureaucrat tmp = *this;
	if (grade == 150)
		throw GradeTooLowException();
	++grade;
	return (tmp);
}

const std::string	Bureaucrat::getName() const{
	return (name);
}

unsigned int	Bureaucrat::getGrade() const{
	return (grade);
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &other) {
	out << other.getName() << ", bureaucrat grade " << other.getGrade() << std::endl;
	return (out);
}