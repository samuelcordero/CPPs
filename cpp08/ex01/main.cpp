/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:46:07 by sacorder          #+#    #+#             */
/*   Updated: 2024/08/30 16:12:02 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <stdlib.h>

#define MAX_VAL 10000

int	main() {
	Span s(10000);
	srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        s.addNumber(value);
    }
	

	std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
	std::cout << "Longest span: " << s.longestSpan() << std::endl;

	return (0);
}