/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:55 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/09 11:42:16 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __WRONGANIMAL_H__
#  define __WRONGANIMAL_H__
#  include <iostream>

class wrongAnimal {
	protected:
		std::string	type;
	private:
		/* private members */
	public:
		wrongAnimal();
		wrongAnimal(const wrongAnimal &cp);
		~wrongAnimal();
		wrongAnimal	&operator=(const wrongAnimal &cp);

		void		makeSound(void);
		std::string	getType(void);
};

#endif