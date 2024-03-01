/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 00:40:49 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/01 01:14:02 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	Harl harl;

	if (argc != 2) {
		std::cerr << "Bad arguments\n";
		return (1);
	}

	harl.complain(argv[1]);
	return (0);
}