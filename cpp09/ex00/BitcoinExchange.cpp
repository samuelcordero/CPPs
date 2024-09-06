/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:06:52 by sacorder          #+#    #+#             */
/*   Updated: 2024/09/06 16:18:56 by sacorder         ###   ########.fr       */
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

	std::map<std::string, float>	db;
	std::string						tmp;

	while (getline(db_in, tmp) && !db_in.fail()) {
		if (tmp.find(',') == std::string::npos) {
			std::cerr << "invalid data.csv file\n";
			exit(1);
		}
		std::string	date, val_str;
		double		value;
		date = tmp.substr(0, tmp.find(','));
		val_str = tmp.substr(tmp.find(',') + 1);
		value = strtod(val_str.c_str(), NULL);
		db[date] = value;
	}
	for (std::map<std::string, float>::iterator it = db.begin(); it != db.end(); ++it) {
		std::cerr << "value at " << it->first << " is " << it->second << std::endl;
	}
}
