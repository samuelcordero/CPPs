/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:42:56 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/25 10:57:07 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WHATEVER_H__
# define __WHATEVER_H__

template<typename T>
T	min(T a, T b) {
	return (a < b) ? a : b;
}

template<typename T>
T	max(T a, T b) {
	return (a > b) ? a : b;
}

template<typename T>
void	swap(T &a, T &b) {
	T	tmp;
	tmp = a;
	a = b;
	b = tmp;
}

#endif
