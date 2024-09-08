/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:06:52 by sacorder          #+#    #+#             */
/*   Updated: 2024/09/07 16:17:37 by sacorder         ###   ########.fr       */
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

	std::map<std::string, double>	db;
	std::string						tmp;

	getline(db_in, tmp);
	if (tmp != "date,exchange_rate") {
		std::cerr << "Error: bad data.csv file: first line should be date,exchange_rate\n";
	}

	while (getline(db_in, tmp) && !db_in.fail()) {
		if (tmp.find(',') == std::string::npos) {
			std::cerr << "invalid data.csv file\n";
			exit(1);
		}

		std::string	date, val_str;
		double		value;
	
		date = tmp.substr(0, tmp.find(','));

		if (!isValidDate(date)) {
			std::cerr << "invalid date in data.csv file\n";
			exit(1);
		}

		val_str = tmp.substr(tmp.find(',') + 1);
		value = strtod(val_str.c_str(), NULL);
		db[date] = value;
	}
	/* for (std::map<std::string, double>::iterator it = db.begin(); it != db.end(); ++it) {
		std::cerr << "value at " << it->first << " is " << it->second << std::endl;
	} */

	getline(in_file, tmp);
	if (tmp != "date | value") {
		std::cerr << "Error: bad input file: first line should be date | value\n";
	}

	while (getline(in_file, tmp) && !in_file.fail()) {
		if (tmp.find('|') == std::string::npos) {
			std::cerr << "Error: bad input: " << tmp << "\n";
			continue ;
		}

		std::string	date, val_str;
		double		quantity;
		
		date = trim(tmp.substr(0, tmp.find('|')));

		if (!isValidDate(date)) {
			std::cerr << "invalid date: " << date << "\n";
			continue ;
		}

		val_str = trim(tmp.substr(tmp.find('|') + 1));
		quantity = strtod(val_str.c_str(), NULL);

		if (quantity > 1000) {
			std::cerr << "Error: invalid quantity at date " << date << ": " << quantity << " is too big\n";
			continue ;
		}

		if (quantity < 0) {
			std::cerr << "Error: invalid quantity at date " << date << ": " << quantity << " is negative\n";
			continue ;
		}

		for (std::map<std::string, double>::iterator it = db.begin(); it != db.end(); ++it) {
			if (it->first >= date) {
				if (it->first > date && it != db.begin())
					--it;
				else if (it->first > date) {
					std::cout << date << " -> " << quantity << " ; no exchange data available" << std::endl;
					break ;
				}
				std::cout << date << " -> " << quantity << "*" << it->second << " = " << quantity * it->second << std::endl;
				break ;
			}
		}
	}
}

std::string trim(const std::string& str) {
	std::string::size_type start = 0;
	std::string::size_type end = str.length();

	while (start < end && std::isspace(str[start])) {
		++start;
	}

	while (end > start && std::isspace(str[end - 1])) {
		--end;
	}

	return str.substr(start, end - start);
}

bool isLeapYear(int year) {
	return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

bool isValidDate(const std::string &date) {
	if (date.length() != 10 || date[4] != '-' || date[7] != '-') {
		return false;
	}

	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());

	if (year <= 0) {
		return false;
	}

	if (month < 1 || month > 12) {
		return false;
	}

	int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (month == 2 && isLeapYear(year)) {
		daysInMonth[1] = 29;
	}

	if (day < 1 || day > daysInMonth[month - 1]) {
		return false;
	}

	return true;
}
