/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:57:47 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/09 13:09:39 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __CAT_H__
#  define __CAT_H__
#  include "AAnimal.hpp"
#  include "Brain.hpp"

class Cat: public AAnimal {
	private:
		Brain	*br;
	public:
		Cat();
		Cat(const Cat &cp);
		~Cat();
		Cat	&operator=(const Cat &cp);

		void	makeSound(void);
		void	printMyBrain();
		void	think(int idx, const std::string idea);
};

#endif