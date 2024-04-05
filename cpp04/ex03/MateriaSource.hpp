/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 01:19:45 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/05 12:35:53 by sacorder         ###   ########.fr       */
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

		virtual void		learnMateria(AMateria*) override;
		virtual AMateria	*createMateria(std::string const & type) override;
};

#endif
