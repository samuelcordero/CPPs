/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:55:52 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/25 11:04:29 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ITER_H__
# define _ITER_H__
# include <stddef.h>

template<typename T, typename Func>
void iter(T *arr, size_t length, Func func) {
	for (size_t i = 0; i < length; ++i) {
		func(arr[i]);
	}
}

#endif