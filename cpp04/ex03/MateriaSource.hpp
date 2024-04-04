/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 01:19:45 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/05 01:22:19 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
# ifndef __MATERIA_SOURCE_H__
#  define __MATERIA_SOURCE_H__
#  include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
	private:
		/* data */
	public:
		MateriaSource(/* args */);
		~MateriaSource();
};

#endif
