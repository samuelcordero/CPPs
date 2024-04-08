/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:04:25 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/08 13:33:10 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", "default target", 25, 5) {
	std::cout << "Default PresidentialPardonForm cons\n";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): AForm("PresidentialPardonForm", target, 25, 5) {
	std::cout << "Param PresidentialPardonForm cons\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): AForm("PresidentialPardonForm", other.getTarget(),25, 5) {
	std::cout << "Copy PresidentialPardonForm cons\n";
}

PresidentialPardonForm::~PresidentialPardonForm() { std::cout << "PresidentialPardonForm dest\n"; }

void	PresidentialPardonForm::execute(const Bureaucrat &b) const {
	if (b.getGrade() <= this->getExecGrade() && this->getSigned()) {
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox\n";
	}
	else
		throw GradeTooLowException();
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	if (this != &other) {
		return (*this);
	}
	return (*this);
}
