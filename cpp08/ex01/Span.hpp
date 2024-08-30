/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:46:03 by sacorder          #+#    #+#             */
/*   Updated: 2024/08/30 16:08:46 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SPAN_HPP__
# define __SPAN_HPP__
# include <stdexcept>
# include <limits.h>

class Span {
	private:
		unsigned int	size;
		int				*arr;
		unsigned int	ctr;
	public:
		Span();
		Span(const unsigned int N);
		Span(const Span &other);
		~Span();

		Span &operator=(const Span &other);

		void			addNumber(int n);
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;

};

#endif