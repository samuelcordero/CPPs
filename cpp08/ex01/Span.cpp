/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:46:05 by sacorder          #+#    #+#             */
/*   Updated: 2024/08/31 12:39:58 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {
	ctr = 0;
	maxSize = 0;
	vector = NULL;
}

Span::Span(const unsigned int N) {
	ctr = 0;
	maxSize = N;
	vector = new std::vector<int>();
}

Span::Span(const Span &other) {
	*this = other;
}

Span::~Span() { delete vector; }

Span	&Span::operator=(const Span &other) {
	if (this != &other) {
		if (vector)
			delete vector;
		vector = NULL;
		if (other.vector) {
			vector = new std::vector<int>();
			ctr = other.ctr;
			maxSize = other.maxSize;

			for (unsigned int i = 0; i < other.vector->size() ; ++i)
				vector->at(i) = other.vector->at(i);
		}
	}
	return (*this);
}

void	Span::addNumber(int n) {
	if (!vector)
		throw std::out_of_range("Vector is NULL (size is 0)");
	if (ctr >= maxSize)
		throw std::out_of_range("Index out of bounds");
	vector->push_back(n);
	++ctr;
}

unsigned int	Span::shortestSpan() const {
	if (ctr <= 1)
		throw std::out_of_range("Not enough numbers");

	unsigned int span = UINT_MAX;

	for (unsigned int i = 0; i < ctr; ++i){
		for (unsigned int j = i + 1; j < ctr; ++j) {
			if (vector->at(j) > vector->at(i) && (unsigned int)(vector->at(j) - vector->at(i)) < span)
				span = vector->at(j) - vector->at(i);
			else if (vector->at(i) >= vector->at(j) && (unsigned int)(vector->at(i) - vector->at(j)) < span)
				span = vector->at(i) - vector->at(j);
		}
	}
	return (span);

}

unsigned int	Span::longestSpan() const {
	if (ctr <= 1)
		throw std::out_of_range("Not enough numbers");

	int min = INT_MAX;
	int max = INT_MIN;

	for (unsigned int i = 0; i < ctr; ++i) {
		if (vector->at(i) < min)
			min = vector->at(i);
		if (vector->at(i) > max)
			max = vector->at(i);
	}
	return (max - min);
}

void	Span::print() const {
	std::cout << "Span contents:\n";
	for (std::vector<int>::const_iterator it = vector->begin(); it < vector->end(); ++it) {
		std::cout << *it << std::endl;
	}
	std::cout << "Span content end\n";
}
