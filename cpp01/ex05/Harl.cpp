/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 00:40:51 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/01 01:35:16 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

const std::string	__debug = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
const std::string	__info =  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
const std::string	__warning =  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
const std::string	__error =  "This is unacceptable! I want to speak to the manager now.\n";

Harl::Harl() {
	std::cout << "Harl created\n";
}
Harl::~Harl() {
	std::cout << "Harl destroyed\n";
}

void	Harl::debug(void) {
	std::cout << __debug;
}

void	Harl::info(void) {
	std::cout << __info;
}

void	Harl::warning(void) {
	std::cout << __warning;
}

void	Harl::error(void) {
	std::cout << __error;
}

void	Harl::complain(std::string level) {
	std::string options[] = {"debug", "info", "warning", "error"};
	void (Harl::*functions[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (long unsigned int i = 0; i < sizeof(options) / sizeof(options[0]); ++i) {
		if (options[i] == level) {
			(this->*functions[i])();
			break ;
		}
	}
}