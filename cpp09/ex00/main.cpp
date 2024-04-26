/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:53:52 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/26 12:20:32 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "btc: error: wrong number of args. Args must be ONE path to a file" << std::endl;
		return (1);
	}

	BitcoinExchange b_exc(argv[1]);

	b_exc.printConversion();

	return (0);
}