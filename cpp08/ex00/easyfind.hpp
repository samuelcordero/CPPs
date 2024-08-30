/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:25:48 by sacorder          #+#    #+#             */
/*   Updated: 2024/08/30 18:41:53 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __EASYFIND_H__
# define __EASYFIND_H__

# include <iostream>
# include <stdexcept>

template<typename T>
size_t	easyfind(const T &container, int find);

#include "easyfind.tpp"

#endif
