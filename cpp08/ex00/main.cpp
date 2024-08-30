/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:26:40 by sacorder          #+#    #+#             */
/*   Updated: 2024/08/30 18:44:32 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int	main() {
	std::vector<int> test;
	size_t n;
	test.push_back(4);
	test.push_back(2);
	test.push_back(231);
	test.push_back(2);
	test.push_back(3);
	try {		
		n = easyfind(test, 4);
		std::cerr << "found at " << n << std::endl;
		n = easyfind(test, 25);
		std::cerr << "found at " << n << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return (0);
}