/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:50:25 by sacorder          #+#    #+#             */
/*   Updated: 2024/02/05 15:02:26 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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
