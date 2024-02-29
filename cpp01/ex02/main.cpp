/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:49:18 by sacorder          #+#    #+#             */
/*   Updated: 2024/02/29 12:54:09 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	std::string str = "HI THIS IS BRAIN";

	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "String mem address: " << &str << std::endl;
	std::cout << "String ptr mem address: " << stringPTR << std::endl;
	std::cout << "String ref mem address: " << &stringREF << std::endl;

	std::cout << "String content: " << str << std::endl;
	std::cout << "String ptr content: " << *stringPTR << std::endl;
	std::cout << "String ref content: " << stringREF << std::endl;
	
	return (0);
}