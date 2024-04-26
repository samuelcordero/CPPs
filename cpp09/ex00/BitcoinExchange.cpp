/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:06:52 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/26 12:27:30 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const std::string path) {
	this->path = path;
	in_file.open(path.c_str());
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
	this->path = other.path;
	if (in_file.is_open())
		in_file.close();
	in_file.open(path.c_str());
}

BitcoinExchange::~BitcoinExchange() { if (in_file.is_open()) in_file.close(); }

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &other) {
	if (this != &other) {
		this->path = other.path;
		if (in_file.is_open())
			in_file.close();
		in_file.open(path.c_str());
	}
	return (*this);
}

void	BitcoinExchange::printConversion() {
	if (!in_file.is_open()) {
		std::cerr << "btc: error: couldn't load input file!" << std::endl; 
		return ;
	}
	db_in.open("data.csv");
	if (!db_in.is_open()) {
		std::cerr << "btc: error: couldn't load input file for db! is data.csv in the same dir as ./btc?" << std::endl; 
		return ;
	}
	std::map<std::string, float> db;
}
