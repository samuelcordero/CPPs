/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:32:49 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/09 13:10:43 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __BRAIN_H__
#  define __BRAIN_H__
#  include <iostream>

class Brain {
	private:
		std::string	ideas[100];
	public:
		Brain();
		Brain(const Brain &cp);
		~Brain();
		Brain	&operator=(const Brain &cp);

		void	setIdea(int idx, const std::string idea);
		void	printBrain();
};

#endif
