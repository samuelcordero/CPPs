/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:42:44 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/25 11:56:11 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_TPP__
#	define __ARRAY_TPP__

#include "Array.hpp"



template<typename T>
Array<T>::Array() {
	s = 1;
	elems = new T();
}

template<typename T>
Array<T>::Array(unsigned int n) {
	s = n;
	elems = new T[s];
}

template<typename T>
Array<T>::Array(const Array<T> &other) {
	s = other.s;
	elems = new T[s];
	for (unsigned int i = 0; i < s; ++i)
		elems[i] = other.elems[i];
}

template<typename T>
Array<T>::~Array() { delete[] elems; }

template<typename T>
Array<T>	&Array<T>::operator=(const Array<T> &other) {
	if (this != &other) {
		s = other.s;
		delete[] elems;
		elems = new T[s];
		for (unsigned int i = 0; i < s; ++i)
			elems[i] = other.elems[i];
	}
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](size_t index) {
	if (index >= s) {
		throw std::out_of_range("Index out of range");
	}
	return (elems[index]);
}

template<typename T>
const T	&Array<T>::operator[](size_t index) const {
	if (index >= s) {
		throw std::out_of_range("Index out of range");
	}
	return (elems[index]);
}

template<typename T>
unsigned int	Array<T>::size() const { return (s); }

#endif
