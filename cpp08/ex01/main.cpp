/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:46:07 by sacorder          #+#    #+#             */
/*   Updated: 2024/08/31 12:42:53 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <stdlib.h>

#define MAX_VAL 10000

int	main() {
	Span s(MAX_VAL + 100);
	std::vector<int> v;
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		v.push_back(value);
	}
	const std::vector<int> v_const = v;
	s.addNumber(1);
	s.addNumber(42);
	s.addManyNums(v_const.begin(), v_const.end());

	s.print();
	

	std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
	std::cout << "Longest span: " << s.longestSpan() << std::endl;

	return (0);
}