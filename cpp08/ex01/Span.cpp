/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:46:05 by sacorder          #+#    #+#             */
/*   Updated: 2024/09/01 13:31:34 by sacorder         ###   ########.fr       */
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
	
	std::vector<int> sorted = *vector;
	std::sort(sorted.begin(), sorted.end());

	return (sorted[1] - sorted[0]);
}

unsigned int	Span::longestSpan() const {
	if (ctr <= 1)
		throw std::out_of_range("Not enough numbers");
	
	std::vector<int> sorted = *vector;
	std::sort(sorted.begin(), sorted.end());

	return (sorted.back() - sorted.front());
}

void	Span::print() const {
	std::cout << "Span contents:\n";
	for (std::vector<int>::const_iterator it = vector->begin(); it < vector->end(); ++it) {
		std::cout << *it << std::endl;
	}
	std::cout << "Span content end\n";
}
