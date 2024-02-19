/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:50:25 by sacorder          #+#    #+#             */
/*   Updated: 2024/02/19 10:28:53 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(){}

Contact::~Contact(){}

void	Contact::setName(std::string name) {
	this->first_name = name;
}

void	Contact::setLastName(std::string last_name) {
	this->last_name = last_name;
}

void	Contact::setNick(std::string nick) {
	this->nickname = nick;
}

void	Contact::setPhone(std::string phone) {
	this->phone = phone;
}

void	Contact::setSecret(std::string secret) {
	this->darkest_secret = secret;
}

std::string	Contact::getName() {
	return (first_name);
}

std::string	Contact::getLastName() {
	return (last_name);
}

std::string	Contact::getNick() {
	return (nickname);
}

std::string	Contact::getPhone() {
	return (phone);
}

std::string	Contact::getSecret() {
	return (darkest_secret);
}

void	Contact::printInfo() {
	std::cout << std::endl;
	std::cout << "Name : " << this->first_name << std::endl;
	std::cout << "Last name : " << this->last_name << std::endl;
	std::cout << "Nickname : " << this->nickname << std::endl;
	std::cout << "Phone : " << this->phone << std::endl;
	std::cout << "Darkest secret : " << this->darkest_secret << std::endl;
}
