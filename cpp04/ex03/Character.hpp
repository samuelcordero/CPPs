/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:30:38 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/05 01:10:50 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __CHARACTER_H__
#  define __CHARACTER_H__

#  include "ICharacter.hpp"

#  include "AMateria.hpp"
#  include "Cure.hpp"
#  include "Ice.hpp"

class Character: public ICharacter{
	private:
		std::string	name;
		AMateria	*inventory[4];
	public:
		Character();
		Character(const std::string &name);
		Character(const Character &cp);
		~Character();

		Character	&operator=(const Character &cp);

};

#endif