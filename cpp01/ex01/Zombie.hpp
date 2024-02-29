/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:12:58 by sacorder          #+#    #+#             */
/*   Updated: 2024/02/29 12:42:29 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __ZOMBIE_H__
#  define __ZOMBIE_H__
#  include <string>
#  include <iostream>

class Zombie {
	private:
		std::string	name;
	
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);
};

Zombie*	zombieHorde(int N, std::string name);

#endif /* __ZOMBIE_H__ */