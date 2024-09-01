/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:46:03 by sacorder          #+#    #+#             */
/*   Updated: 2024/09/01 13:18:03 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SPAN_HPP__
# define __SPAN_HPP__
# include <stdexcept>
# include <limits.h>
# include <vector>
# include <iostream>
# include <algorithm>

class Span {
	private:
		std::vector<int>	*vector;
		unsigned int		ctr;
		unsigned int		maxSize;
	public:
		Span();
		Span(const unsigned int N);
		Span(const Span &other);
		~Span();

		Span &operator=(const Span &other);

		void			addNumber(int n);
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;
		void			print() const;

		template<typename T>
		void			addManyNums(T begin, T end) {
			if (!vector)
				throw std::out_of_range("Vector is NULL (size is 0)");
			if (end - begin + ctr >= maxSize)
				throw std::out_of_range("Not enough space");
			vector->insert(vector->end(), begin, end);
			ctr += end - begin;
		}

};

#endif