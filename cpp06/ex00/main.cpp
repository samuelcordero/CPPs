/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:27:49 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/08 15:54:34 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Wrong number of args\n";
		return (1);
	}
	
	std::string lit = argv[1];

	char c = ScalarConverter::convertChar(lit);
	if (isprint(c))
		std::cout << "char: '" << ScalarConverter::convertChar(lit) << "'" << std::endl;
	else
		std::cout << "Non displayable\n";
	std::cout << "int: " << ScalarConverter::convertInt(lit) << std::endl;
	std::cout << "float: " << ScalarConverter::convertFloat(lit) << "f" << std::endl;
	std::cout << "double: " << ScalarConverter::convertDouble(lit) << std::endl;
	return (0);
}