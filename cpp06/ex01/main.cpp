/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:36:24 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/24 12:48:44 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int	main() {
	Data	d;
	Data	*test;
	uintptr_t	p;

	d.an_integer = 32;
	d.a_double = 42.2;
	p = Serializer::serialize(&d);
	test = Serializer::deserialize(p);
	std::cout << "Output: " << test->an_integer << " " << test->a_double << std::endl;
	return (0);
}