/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:46:03 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/25 16:59:29 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef	 __MUTANTSTACK_H__
# define __MUTANTSTACK_H__
# include <stack>

template<typename T>
class MutantStack: public std::stack<T> {
	private:
		/* data */
	public:
		MutantStack();
		MutantStack(const MutantStack &other);
		~MutantStack();

		MutantStack	&operator=(const MutantStack &other);

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator begin();
		iterator end();
		const_iterator begin() const;
		const_iterator end() const;
};

#include "MutantStack.tpp"

#endif
