/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:04:17 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/08 12:46:21 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("default RobotomyRequestForm", 72, 45) {
	std::cout << "Default RobotomyRequestForm cons\n";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string name): AForm(name, 72, 45) {
	std::cout << "Param RobotomyRequestForm cons\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): AForm(other.getName(), 72, 45) {
	std::cout << "Copy RobotomyRequestForm cons\n";
}

RobotomyRequestForm::~RobotomyRequestForm() { std::cout << "RobotomyRequestForm dest\n"; }

void	RobotomyRequestForm::execute(const Bureaucrat &b) const {
	std::srand(std::time(0));

	int rand_int = std::rand() % 2;

	if (b.getGrade() <= this->getExecGrade() && this->getSigned()) {
		if (rand_int) {
			std::cout << this->getName() << " has been robotomized succesfully\n";
		} else {
			std::cout << "Robotomy failed...\n";
		}
	}
	else
		throw GradeTooLowException();
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	if (this != &other) {
		return (*this);
	}
	return (*this);
}
