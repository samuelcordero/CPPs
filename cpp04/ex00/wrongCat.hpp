/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:57:47 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/18 12:25:52 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __WRONGCAT_H__
#  define __WRONGCAT_H__
#  include "wrongAnimal.hpp"

class wrongCat: public wrongAnimal {
	private:
		/* private members */
	public:
		wrongCat();
		wrongCat(const wrongCat &cp);
		~wrongCat();
		wrongCat	&operator=(const wrongCat &cp);
};

#endif