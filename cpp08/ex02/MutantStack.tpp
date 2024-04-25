/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:46:07 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/25 17:07:46 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __MUTANTSTACK_TPP__
# define __MUTANTSTACK_TPP__
# include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack(): std::stack<T>() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &other): std::stack<T>(other) {}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &other) {
	if (this != &other)
		std::stack<T>::operator=(other);
	return (*this);
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin() {
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end() {
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::begin() const {
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::end() const {
	return (this->c.end());
}

#endif
