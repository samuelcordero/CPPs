/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:26:31 by sacorder          #+#    #+#             */
/*   Updated: 2024/09/01 13:23:06 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __EASYFIND_TPP__
# define __EASYFIND_TPP__
# include "easyfind.hpp"

template<typename T>
size_t	easyfind(const T &container, int find) {
	typename T::const_iterator it;
	it = std::find(container.begin(), container.end(), find);
	if (it == container.end())
		throw std::invalid_argument("Couldn't find provided int");
	return std::distance(container.begin(), it); // this is due to lists an other conts that do not have random access iterators
}

#endif