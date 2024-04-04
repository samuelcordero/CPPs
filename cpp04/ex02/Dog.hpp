/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:57:50 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/05 00:38:41 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __DOG_H__
#  define __DOG_H__
#  include "AAnimal.hpp"
#  include "Brain.hpp"

class Dog: public AAnimal {
	private:
		Brain	*br;
	public:
		Dog();
		Dog(const Dog &cp);
		~Dog();
		Dog	&operator=(const Dog &cp);

		void	makeSound(void);
};

#endif