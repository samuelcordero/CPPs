/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:49:53 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/08 12:56:43 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __ROBOTOMYREQUESTFORM_H__
#  define __ROBOTOMYREQUESTFORM_H__
#  include "AForm.hpp"
#  include <cstdlib>
#  include <ctime>

class RobotomyRequestForm: public AForm {
	private:
		/* data */
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string name);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		virtual ~RobotomyRequestForm();

		void	execute(const Bureaucrat &b) const;

		RobotomyRequestForm	&operator=(const RobotomyRequestForm &other);
};

#endif
