/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:18:44 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/05 13:40:46 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __AMATERIA_H__
# define __AMATERIA_H__
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		/* data */
		std::string	type;
	private:
		/* data */
	public:
		AMateria(/* args */);
		AMateria(std::string const &type);
		virtual ~AMateria();

		virtual std::string const	&getType() const;
		virtual AMateria*			clone() const = 0;
		virtual void				use(ICharacter &target);
};

#endif
