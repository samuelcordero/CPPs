/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:28:04 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/05 16:11:14 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __ICHARACTER_H__
#  define __ICHARACTER_H__
#  include "AMateria.hpp"

class AMateria;

class ICharacter {
	public:
		virtual ~ICharacter() {}
		virtual std::string const	&getName() const = 0;
		virtual void				equip(AMateria* m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter& target) = 0;

		virtual AMateria			*getEquip(int idx) const = 0;
};

#endif
