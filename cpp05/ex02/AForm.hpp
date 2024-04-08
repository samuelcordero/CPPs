/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 23:18:43 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/08 12:53:11 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __AFORM_H__
#  define __AFORM_H__
#  include <iostream>
#  include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {	
	private:
		const std::string	name;
		bool				is_signed;
		const int			sign_grade;
		const int			exec_grade;
	public:
		AForm();
		AForm(const AForm &other);
		AForm(const std::string name, const int sign_grade, const int exec_grade);
		virtual ~AForm();

		AForm	&operator=(const AForm &other);

		const std::string	getName() const;
		bool				getSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		void				beSigned(const Bureaucrat &b);
		virtual void		execute(const Bureaucrat &b) const;

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

std::ostream &operator<<(std::ostream &out, const AForm &other);

#endif
