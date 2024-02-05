/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:50:21 by sacorder          #+#    #+#             */
/*   Updated: 2024/02/05 23:36:48 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook() {
	index = 0;
}

PhoneBook::~PhoneBook() {}

void	PhoneBook::printContacts() {
	std::cout << "Index | First name | Last name | Nickname\n";
	for (unsigned int i = 0; i < 8 && i < index; ++i) {
		std::cout << i << "|" << pb_arr[i].getName() << "|" << pb_arr[i].getLastName() << "|" << pb_arr[i].getNick() << std::endl;
	}
}

void	PhoneBook::addContact() {
	std::string	tmp[5];

	while (!std::cin.fail() && tmp[0].length() == 0) {
		std::cout << "Enter first name: ";
		std::cin >> tmp[0];
	}
	while (!std::cin.fail() && tmp[1].length() == 0) {
		std::cout << "Enter last name: ";
		std::cin >> tmp[1];
	}
	while (!std::cin.fail() && tmp[2].length() == 0) {
		std::cout << "Enter nick name: ";
		std::cin >> tmp[2];
	}
	while (!std::cin.fail() && tmp[3].length() == 0) {
		std::cout << "Enter phone number: ";
		std::cin >> tmp[3];
	}
	while (!std::cin.fail() && tmp[4].length() == 0) {
		std::cout << "Enter darkest secret: ";
		std::cin >> tmp[4];
	}
	if (std::cin.eof())
		return ;
	pb_arr[index % 8].setName(tmp[0]);
	pb_arr[index % 8].setLastName(tmp[1]);
	pb_arr[index % 8].setNick(tmp[2]);
	pb_arr[index % 8].setPhone(tmp[3]);
	pb_arr[index % 8].setSecret(tmp[4]);
	++index;
}

void	PhoneBook::searchContact() {
	printContacts();
}
