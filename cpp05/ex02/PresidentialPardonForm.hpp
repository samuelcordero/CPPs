/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:49:47 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/08 12:58:12 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __PRESIDENTIALPARDONFORM_H__
#  define __PRESIDENTIALPARDONFORM_H__
#  include "AForm.hpp"

class PresidentialPardonForm: public AForm {
	private:
		/* data */
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string name);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		virtual ~PresidentialPardonForm();

		void	execute(const Bureaucrat &b) const;

		PresidentialPardonForm	&operator=(const PresidentialPardonForm &other);
};

#endif
