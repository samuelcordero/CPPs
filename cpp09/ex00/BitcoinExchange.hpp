/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:55:41 by sacorder          #+#    #+#             */
/*   Updated: 2024/09/06 16:05:07 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BITCOINEXCHANGE_H__
# define __BITCOINEXCHANGE_H__
# include <fstream>
# include <iostream>
# include <map>
# include <cstdlib>

class BitcoinExchange {
	private:
		std::ifstream	in_file;
		std::ifstream	db_in;
		std::string		path;
	public:
		BitcoinExchange();
		BitcoinExchange(const std::string path);
		BitcoinExchange(const BitcoinExchange &other);
		~BitcoinExchange();

		BitcoinExchange	&operator=(const BitcoinExchange &other);

		void	printConversion();
};

#endif
