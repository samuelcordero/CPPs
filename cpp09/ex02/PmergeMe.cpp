/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:34:15 by sacorder          #+#    #+#             */
/*   Updated: 2024/09/08 12:32:51 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(char **args) {
	for (int i = 1; args[i]; ++i) {
		if (!checkArg(args[i]))
			throw std::invalid_argument(args[i]);
	}

	std::cout << "Before:";
	for (int i = 1; args[i]; ++i) {
		std::cout << " " << args[i];
	}
	std::cout << std::endl;
	
	//vector
	clock_t start = clock();

	for (int i = 1; args[i]; ++i) {
		vector.push_back(atoi(args[i]));
	}

	fordJohnsonSort(vector);

	clock_t end = clock();

	double duration = (double)(end - start) / CLOCKS_PER_SEC * 1000;

	std::cout << "After:";
	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); ++it) {
		std::cout << " " << *it;
	}
	std::cout << std::endl;

	std::cout << "Time to process a range of " << vector.size() << " elements with std::vector : " << duration << "ms.\n";

	//list
	start = clock();
	
	for (int i = 1; args[i]; ++i) {
		list.push_back(atoi(args[i]));
	}

	fordJohnsonSort(list);

	end = clock();

	duration = (double)(end - start) / CLOCKS_PER_SEC * 1000;

	std::cout << "Time to process a range of " << list.size() << " elements with std::list : " << duration << "ms.\n";

}

PmergeMe::PmergeMe(const PmergeMe &other) {
	*this = other;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &other) {
	if (this != &other) {
		vector = other.vector;
		list = other.list;
	}
	return *this;
}

PmergeMe::~PmergeMe() {}

bool	checkArg(const std::string &arg) {
	bool	sign = false;

	for (std::string::const_iterator it = arg.begin(); it != arg.end(); ++it) {
		if (!std::isdigit(*it) && *it != '+' && *it != '-') {
			return false;
		}
		if (*it == '+' || *it == '-') {
			if (sign)
				return false;
			sign = true;
		}
	}
	
	return true;
}
