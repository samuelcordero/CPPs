/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:55 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/06 13:05:35 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __CLAPTRAP_H__
#  define __CLAPTRAP_H__
#  include <iostream>

class ClapTrap {
	private:
		std::string name;
		int			hit_points;
		int			energy_points;
		int			attack_damage;
	public:
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &cp);
		~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &cp);

		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif