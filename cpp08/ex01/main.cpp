/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:46:07 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/25 13:19:49 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int	main() {
	Span s(10);

	s.addNumber(6);
	s.addNumber(3);
	s.addNumber(17);
	s.addNumber(9);
	s.addNumber(11);

	std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
	std::cout << "Longest span: " << s.longestSpan() << std::endl;

	return (0);
}