/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:57:47 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/18 12:25:57 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __CAT_H__
#  define __CAT_H__
#  include "Animal.hpp"

class Cat: public Animal {
	private:
		/* private members */
	public:
		Cat();
		Cat(const Cat &cp);
		~Cat();
		Cat	&operator=(const Cat &cp);

		void	makeSound(void);
};

#endif