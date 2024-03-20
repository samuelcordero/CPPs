/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 00:40:51 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/20 12:14:05 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

const std::string	__debug_msg = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
const std::string	__info_msg =  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
const std::string	__warning_msg =  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
const std::string	__error_msg =  "This is unacceptable! I want to speak to the manager now.\n";

Harl::Harl() {
	std::cout << "Harl created\n";
}
Harl::~Harl() {
	std::cout << "Harl destroyed\n";
}

void	Harl::debug(void) {
	std::cout << "[ DEBUG ]\n" << __debug_msg << std::endl;
}

void	Harl::info(void) {
	std::cout << "[ INFO ]\n" << __info_msg << std::endl;
}

void	Harl::warning(void) {
	std::cout << "[ WARNING ]\n" << __warning_msg << std::endl;
}

void	Harl::error(void) {
	std::cout << "[ ERROR ]\n" << __error_msg << std::endl;
}

void	Harl::complain(std::string level) {
	std::string 		options[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	long unsigned int 	i;

	for (i = 0; i < sizeof(options) / sizeof(options[0]); ++i) {
		if (options[i] == level) {
			switch (i) {
				case 0:
					debug();
				//Fallthrough
				case 1:
					info();
				//Fallthrough
				case 2:
					warning();
				//Fallthrough
				case 3:
					error();
				//Fallthrough
				default:
					break ;
			}
			break ;
		}
	}
}