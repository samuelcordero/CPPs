/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:30:38 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/20 15:32:20 by sacorder         ###   ########.fr       */
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
		/* data */
	public:
		Character(/* args */);
		~Character();
};

#endif