/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:24:39 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/05 13:26:22 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __ICE_H__
#  define __ICE_H__
#  include "AMateria.hpp"

class Ice: public AMateria{
	private:
		/* data */
	public:
		Ice();
		Ice(const Ice &cp);
		~Ice();
		
		Ice			&operator=(const Ice &cp);
		AMateria*	clone() const;
		void		use(ICharacter &target);
};

#endif
