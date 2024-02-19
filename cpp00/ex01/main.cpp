/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:50:27 by sacorder          #+#    #+#             */
/*   Updated: 2024/02/19 10:25:25 by sacorder         ###   ########.fr       */
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
		std::cerr << "PhoneBook: invalid args\n";
		return (1);
	}

	while (!std::cin.fail())	{
		std::cout << "\nPlease enter a command (ADD, SEARCH, EXIT):\n";
		std::cin >> input;
		
		toUpper(input);
		if (input == "ADD")
			phone_book.addContact();
		else if (input == "SEARCH")
			phone_book.searchContact();
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Invalid command\n";
		if (std::cin.eof())
			std::cerr << "\nPhoneBook: cin error: eof: Exiting.\n";
	}
	
	return (0);
}