/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:05:18 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/14 13:25:26 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __FRAGTRAP_H__
#  define __FRAGTRAP_H__
#  include "ScavTrap.hpp"

class FragTrap: public ScavTrap {
	private:
	
	public:
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap &cp);
		~FragTrap();
		FragTrap	&operator=(const FragTrap &cp);

		void	highFiveGuys(void);
		void	attack(const std::string &target);
};

#endif