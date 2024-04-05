/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:24:39 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/05 12:48:11 by sacorder         ###   ########.fr       */
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
		
		Ice	&operator=(const Ice &cp);
		virtual AMateria*	clone() const override;
		virtual void		use(ICharacter &target) override;
};

#endif
