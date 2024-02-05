/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:50:27 by sacorder          #+#    #+#             */
/*   Updated: 2024/02/05 15:59:42 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <fstream>
#include <limits>

void	toUpper(std::string &str) {
	for (std::string::iterator it = str.begin(); it != str.end(); ++it)
        *it = static_cast<char>(std::toupper(static_cast<unsigned char>(*it)));
}

int	main(int argc, char **argv) {
	PhoneBook phone_book;
	std::string	input;

	(void) argv;
	
	if (argc != 1) {
		std::cerr << "PhoneBook: invalid args" << std::endl;
		return (1);
	}

	while (input != "EXIT" && !std::cin.fail())	{
		std::cout << "Please enter a command: (ADD, SEARCH, EXIT)\n";
		std::cin >> input;
		
		toUpper(input);
		if (input == "ADD")
			phone_book.addContact();
		if (input == "SEARCH")
			phone_book.searchContact();
		if (std::cin.eof())
			std::cerr << "cin error due to eof\n";
	}
	
	return (0);
}