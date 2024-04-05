/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:23:05 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/05 12:45:46 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __CURE_H__
#  define __CURE_H__
#  include "AMateria.hpp"

class Cure: public AMateria {
	private:
		/* data */
	public:
		Cure();
		Cure(const Cure &cp);
		~Cure();

		Cure	&operator=(const Cure &cp);
		virtual AMateria*	clone() const override;
		virtual void		use(ICharacter &target) override;
};

#endif
