/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:15:25 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/14 13:25:32 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef  __SCAVTRAP_H__
#  define __SCAVTRAP_H__
#  include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	private:
		bool	guard_mode;
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &cp);
		~ScavTrap();
		ScavTrap	&operator=(const ScavTrap &cp);

		void	guardGate();
		void	attack(const std::string &target);

		void	setGuardMode(bool mode);
		bool	getGuardMode(void) const;
};

#endif