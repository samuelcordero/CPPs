/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:55 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/18 13:15:47 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __ANIMAL_H__
#  define __ANIMAL_H__
#  include <iostream>

class Animal {
	protected:
		std::string	type;
	private:
		/* private members */
	public:
		Animal();
		Animal(const Animal &cp);
		virtual ~Animal();
		Animal	&operator=(const Animal &cp);

		virtual void		makeSound(void);
		virtual void		printType(void);
		virtual std::string	getType(void);
};

#endif