/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:55 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/20 15:07:24 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __AANIMAL_H__
#  define __AANIMAL_H__
#  include <iostream>

class AAnimal {
	protected:
		std::string	type;
		AAnimal();
		AAnimal(const AAnimal &cp);
	private:
		/* private members */
	public:
		virtual ~AAnimal();
		AAnimal	&operator=(const AAnimal &cp);

		virtual void		makeSound(void);
		virtual void		printType(void);
		virtual void		printMyBrain(void);
		virtual void		think(int idx, const std::string idea);
		virtual std::string	getType(void);
};

#endif