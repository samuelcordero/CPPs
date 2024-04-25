/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:46:05 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/25 13:18:55 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {
	size = 42;
	ctr = 0;
	arr = new int[size];
}

Span::Span(const unsigned int N) {
	size = N;
	ctr = 0;
	arr = new int[size];
}

Span::Span(const Span &other) {
	size = other.size;
	ctr = other.ctr;
	arr = new int[size];

	for (unsigned int i = 0; i < size ; ++i)
		arr[i] = other.arr[i];
}

Span::~Span() { delete[] arr; }

Span	&Span::operator=(const Span &other) {
	if (this != &other) {
		delete[] arr;
		size = other.size;
		ctr = other.ctr;
		arr = new int[size];

		for (unsigned int i = 0; i < size ; ++i)
			arr[i] = other.arr[i];
	}
	return (*this);
}

void	Span::addNumber(int n) {
	if (ctr >= size)
		throw std::out_of_range("Index out of bounds");
	arr[ctr] = n;
	++ctr;
}

unsigned int	Span::shortestSpan() const {
	if (ctr <= 1)
		throw std::out_of_range("Not enough numbers");

	unsigned int span = UINT_MAX;

	for (unsigned int i = 0; i < ctr; ++i){
		for (unsigned int j = i + 1; j < ctr; ++j) {
			if (arr[j] > arr[i] && (unsigned int)(arr[j] - arr[i]) < span)
				span = arr[j] - arr[i];
			else if (arr[i] > arr[j] && (unsigned int)(arr[i] - arr[j]) < span)
				span = arr[i] - arr[j];
		}
	}
	return (span);

}

unsigned int	Span::longestSpan() const {
	if (ctr <= 1)
		throw std::out_of_range("Not enough numbers");

	int min = INT_MAX;
	int max = INT_MIN;

	for (unsigned int i = 0; i < ctr; ++i){
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	return (max - min);
}
