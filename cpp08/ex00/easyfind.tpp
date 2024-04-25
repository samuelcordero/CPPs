/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:26:31 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/25 12:44:00 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __EASYFIND_TPP__
# define __EASYFIND_TPP__
# include "easyfind.hpp"

template<typename T>
void	easyfind(const T &container, int find) {
	typename T::const_iterator it;
	for (it = container.begin(); it != container.end(); ++it) {
		if (*it == find)
			break ;
	}
	if (it == container.end()) {
		std::cout << "Not found!" << std::endl;
		return ;
	}
	std::cout << "Found " << *it << " at pos " << it - container.begin() << std::endl;
}

#endif