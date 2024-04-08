/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:04:17 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/08 14:05:52 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", "default target", 72, 45) {
	std::cout << "Default RobotomyRequestForm cons\n";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): AForm("RobotomyRequestForm", target, 72, 45) {
	std::cout << "Param RobotomyRequestForm cons\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): AForm("RobotomyRequestForm", other.getTarget(), 72, 45) {
	std::cout << "Copy RobotomyRequestForm cons\n";
}

RobotomyRequestForm::~RobotomyRequestForm() { std::cout << "RobotomyRequestForm dest\n"; }

void	RobotomyRequestForm::execute(const Bureaucrat &b) const {
	std::srand(std::time(0));

	int rand_int = std::rand() % 2;

	if (b.getGrade() <= this->getExecGrade() && this->getSigned()) {
		if (rand_int) {
			std::cout << this->getTarget() << " has been robotomized succesfully\n";
		} else {
			std::cout << "Robotomy failed...\n";
		}
	}
	else
		throw GradeTooLowException();
}

AForm	*RobotomyRequestForm::createInstance(const std::string target) {
	return (new RobotomyRequestForm(target));
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	if (this != &other) {
		return (*this);
	}
	return (*this);
}
