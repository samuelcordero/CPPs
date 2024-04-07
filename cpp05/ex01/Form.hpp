/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 23:18:43 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/08 00:20:45 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __FORM_H__
#  define __FORM_H__
#  include <iostream>
#  include "Bureaucrat.hpp"

class Bureaucrat;

class Form {	
	private:
		const std::string	name;
		bool				is_signed;
		const int			sign_grade;
		const int			exec_grade;
	public:
		Form();
		Form(const Form &other);
		Form(const std::string name, const int sign_grade, const int exec_grade);
		~Form();

		Form	&operator=(const Form &other);

		const std::string	getName() const;
		bool				getSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		void				beSigned(const Bureaucrat &b);

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

std::ostream &operator<<(std::ostream &out, const Form &other);

#endif
