/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:31:23 by sacorder          #+#    #+#             */
/*   Updated: 2024/09/05 15:22:19 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

int	main(int argc, char **argv) {
	RPN calc;

	if (argc != 2) {
		std::cerr << "Invalid args: args should be one string in RPN\n";
		
		return (1);
	}

	try {
		int res = calc.calculate(argv[1]);
		std::cout << res << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Invalid argument: " << e.what() << std::endl;

		return (1);
	}

	return (0);
}