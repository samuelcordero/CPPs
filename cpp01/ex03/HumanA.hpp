/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:56:07 by sacorder          #+#    #+#             */
/*   Updated: 2024/02/29 13:35:50 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __HUMAN_A_H__
#  define __HUMAN_A_H__
#  include "Weapon.hpp"

class HumanA {
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack(void);
};

#endif /* __HUMAN_A_H__ */