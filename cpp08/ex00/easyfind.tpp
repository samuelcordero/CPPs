/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:26:31 by sacorder          #+#    #+#             */
/*   Updated: 2024/08/30 18:43:42 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __EASYFIND_TPP__
# define __EASYFIND_TPP__
# include "easyfind.hpp"

template<typename T>
size_t	easyfind(const T &container, int find) {
	typename T::const_iterator it;
	for (it = container.begin(); it != container.end(); ++it) {
		if (*it == find)
			return it - container.begin();
	}
	throw std::invalid_argument("Couldn't find provided int");
}

#endif