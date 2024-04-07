/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 22:21:31 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/08 00:17:37 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BUREAUCRAT_H__
# define __BUREAUCRAT_H__
# include <iostream>

class Bureaucrat {
	private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, const int grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();

		Bureaucrat	&operator=(const Bureaucrat &other);
		Bureaucrat	&operator++();
		Bureaucrat	&operator--();
		Bureaucrat	operator++(int);
		Bureaucrat	operator--(int);

		const std::string	getName() const;
		int		getGrade() const;

		class GradeTooHighException : public std::exception {
		public:
			GradeTooHighException() throw() {}

			virtual const char* what() const throw() {
				return "Grade is too high";
			}
		};

		class GradeTooLowException : public std::exception {
		public:
			GradeTooLowException() throw() {}

			virtual const char* what() const throw() {
				return "Grade is too low";
			}
		};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &other);

#endif
