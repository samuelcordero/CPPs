/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:29:16 by sacorder          #+#    #+#             */
/*   Updated: 2024/09/06 15:16:26 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &other) {
	*this = other;
}

RPN::~RPN() {}

RPN	&RPN::operator=(const RPN &other) {
	if (this != &other) {
		stash = other.stash;
	}
	return *this;
}

bool	RPN::isOperator(char c) {
	if (c == '+' || c == '-' || c == '/' || c == '*')
		return true;
	return false;
}

void	RPN::parse(const std::string & opQuery) {
	for (size_t i = 0; i < opQuery.length(); ++i) {
		if (!std::isdigit(opQuery[i]) && !isOperator(opQuery[i]) && !std::isspace(opQuery[i]))
			throw std::invalid_argument(opQuery);
	}
}

int		RPN::calculate(const std::string& opQuery) {
	parse(opQuery);

	for (size_t i = 0; i < opQuery.length(); ++i) {
		if (std::isdigit(opQuery[i])) {
			stash.push(opQuery[i] - 48);
		} else if (isOperator(opQuery[i]) && stash.size() > 1) {
			int op1, op2;
			op2 = stash.top();
			stash.pop();
			op1 = stash.top();
			stash.pop();
			if (opQuery[i] == '+') {
				stash.push(op1 + op2);
			} else if (opQuery[i] == '-') {
				stash.push(op1 - op2);
			} else if (opQuery[i] == '/') {
				if (op2 == 0)
					throw std::invalid_argument("Cannot divide by zero");
				stash.push(op1 / op2);
			} else if (opQuery[i] == '*') {
				stash.push(op1 * op2);
			}
		} else if (isOperator(opQuery[i])) {
			throw std::invalid_argument(opQuery);
		}
	}
	if (stash.size() != 1) {
		throw std::invalid_argument(opQuery);
	}
	return stash.top();
}