/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:46:05 by sacorder          #+#    #+#             */
/*   Updated: 2024/08/30 19:09:23 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {
	ctr = 0;
	vector = new std::vector<int>(42);
}

Span::Span(const unsigned int N) {
	ctr = 0;
	vector = new std::vector<int>(N);
}

Span::Span(const Span &other) {
	*this = other;
}

Span::~Span() { delete[] arr; }

Span	&Span::operator=(const Span &other) {
	if (this != &other) {
		delete vector;
		vector = new std::vector<int>(other.vector->size());
		ctr = other.ctr;

		for (unsigned int i = 0; i < other.vector->size() ; ++i)
			vector[i] = other.vector[i];
	}
	return (*this);
}

void	Span::addNumber(int n) {
	if (ctr >= vector->size())
		throw std::out_of_range("Index out of bounds");
	vector[ctr] = n;
	++ctr;
}

unsigned int	Span::shortestSpan() const {
	if (ctr <= 1)
		throw std::out_of_range("Not enough numbers");

	unsigned int span = UINT_MAX;

	for (unsigned int i = 0; i < ctr; ++i){
		for (unsigned int j = i + 1; j < ctr; ++j) {
			if (vector.at(j) > vector[i] && (unsigned int)(vector.at(j) - vector[i]) < span)
				span = vector.at(j) - vector[i];
			else if (vector[i] > vector.at(j) && (unsigned int)(vector[i] - vector.at(j)) < span)
				span = vector[i] - vector[j];
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
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	return (max - min);
}

void	Span::addManyNums() {}
