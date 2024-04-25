/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:07:13 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/25 11:57:22 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ARRAY_H__
# define __ARRAY_H__
# include <stddef.h>
# include <stdexcept>

template<typename T>
class Array {
	private:
		T 				*elems;
		unsigned int	s;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		~Array();

		Array	&operator=(const Array &other);
		T		&operator[](size_t index);
 		const T	&operator[](size_t index) const;

		unsigned int	size() const;
};

# include "Array.tpp"

#endif
