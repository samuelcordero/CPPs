/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:18:44 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/20 15:22:52 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __AMATERIA_H__
# define __AMATERIA_H__
# include <string>

class AMateria {
	protected:
		/* data */
		std::string	type;
	private:
		/* data */
	public:
		AMateria(/* args */);
		AMateria(std::string const &type);
		~AMateria();

		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter &target);
};

#endif
