/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 01:19:45 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/05 13:32:57 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
# ifndef __MATERIA_SOURCE_H__
#  define __MATERIA_SOURCE_H__
#  include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
	private:
		AMateria	*known_materias[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &cp);
		~MateriaSource();
		MateriaSource	&operator=(const MateriaSource &cp);

		void		learnMateria(AMateria*);
		AMateria	*createMateria(std::string const & type);
};

#endif
