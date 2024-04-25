/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:00:42 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/25 11:05:41 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void	printInt(int data) {
	std::cout << "Value: " << data << std::endl;
}

void	printStr(std::string data) {
	std::cout << "Value: " << data << std::endl;
}

int main() {
	int	arr[3] = {0, 1, 2};

	::iter(arr, 3, printInt);

	std::string	arr2[3] = {"Mama mia", "its me Mario!", "ohhh no!!!"};

	::iter(arr2, 3, printStr);

	return (0);
}