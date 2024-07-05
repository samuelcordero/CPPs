/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:49:55 by sacorder          #+#    #+#             */
/*   Updated: 2024/07/05 14:16:09 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __SHRUBBERYCREATIONFORM_H__
#  define __SHRUBBERYCREATIONFORM_H__
#  include "AForm.hpp"
#  include <fstream>

const std::string	shrub = "         :::\n"
"       :+:  \n"
"     +:+ +:+\n"
"   +#+ASCII  +:+ \n"
" +#+#+TREE#+#+#+\n"
"      #+#   \n"
"     ###   \n";

class ShrubberyCreationForm: public AForm {
	private:
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		virtual ~ShrubberyCreationForm();

		void	execute(const Bureaucrat &b) const;
		
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &other);
};

#endif
