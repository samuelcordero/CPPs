/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:56:17 by sacorder          #+#    #+#             */
/*   Updated: 2024/02/29 13:06:04 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __WEAPON_H__
#  define __WEAPON_H__
#  include <string>
#  include <iostream>

class Weapon {
	private:
		std::string	type;
	public:
		Weapon(std::string type);
		~Weapon();
		void				setType(std::string type);
		const std::string	&getType(void);
};

#endif /* __WEAPON_H__ */