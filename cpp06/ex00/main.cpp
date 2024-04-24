/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:27:49 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/24 12:32:55 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

int	main(int argc, char **argv) {

/* 	ScalarConverter s;
	(void)s; */
	
	if (argc != 2) {
		std::cerr << "Wrong number of args\n";
		return (1);
	}
	
	std::string lit = argv[1];
	ScalarConverter::convert(lit);
	return (0);
}