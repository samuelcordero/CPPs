/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:26:40 by sacorder          #+#    #+#             */
/*   Updated: 2024/09/01 13:34:14 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int	main() {
	std::vector<int> test;
	size_t n;
	test.push_back(4);
	test.push_back(2);
	test.push_back(231);
	test.push_back(2);
	test.push_back(3);
	try {		
		n = easyfind(test, 2);
		std::cout << "found at " << n << std::endl;
		n = easyfind(test, 3);
		std::cout << "found at " << n << std::endl;
		n = easyfind(test, 25);
		std::cout << "found at " << n << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << "List test:\n";
	std::list<int> testl;
	testl.push_back(4);
	testl.push_back(2);
	testl.push_back(231);
	testl.push_back(2);
	testl.push_back(3);
	try {		
		n = easyfind(testl, 2);
		std::cout << "found at " << n << std::endl;
		n = easyfind(testl, 3);
		std::cout << "found at " << n << std::endl;
		n = easyfind(testl, 25);
		std::cout << "found at " << n << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return (0);
}