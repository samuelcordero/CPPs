/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:35:41 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/08 13:39:47 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __INTERN_H__
#  define __INTERN_H__
#  include "AForm.hpp"
#  include "ShrubberyCreationForm.hpp"
#  include "PresidentialPardonForm.hpp"
#  include "RobotomyRequestForm.hpp"

class Intern {
	private:
		/* data */
	public:
		Intern();
		Intern(const Intern &other);
		~Intern();

		Intern	&operator=(const Intern &other);

		AForm	*makeForm(const std::string name, const std::string target);
};

#endif
