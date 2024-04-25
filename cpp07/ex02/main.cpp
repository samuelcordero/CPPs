/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:41:19 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/25 11:58:43 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
	Array<int> *arr = new Array<int>(5);

	(*arr)[1] = 2;
	std::cout << (*arr)[1] << std::endl;

	try {
		std::cout << (*arr)[989] << std::endl; //out of bounds
	} catch (std::exception &e) {
		std::cerr << "Error: exception: " << e.what() << std::endl;
	}
	return (0);
}