/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:31:45 by sacorder          #+#    #+#             */
/*   Updated: 2024/09/07 16:49:16 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PmergeMe.hpp"

int	main(int argc, char **argv) {
	if (argc <= 1) {
		std::cerr << "No args provided" << std::endl;
		return 1;
	}
	try {
		PmergeMe p(argv);
	} catch(const std::invalid_argument& e) {
		std::cerr << "Invalid argument: " << e.what() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
