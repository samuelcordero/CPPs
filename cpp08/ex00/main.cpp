/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:26:40 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/25 12:42:58 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int	main() {
	std::vector<int> test;
	test.push_back(4);
	test.push_back(2);
	test.push_back(231);
	test.push_back(2);
	test.push_back(3);
	easyfind(test, 4);
	easyfind(test, 25);
	return (0);
}