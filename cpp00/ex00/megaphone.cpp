/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:15:57 by sacorder          #+#    #+#             */
/*   Updated: 2024/02/04 17:58:55 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	toUpperString(char *cstr)
{
	std::string str;

	for (int i = 0; cstr[i]; ++i)
		str += toupper(cstr[i]);
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; ++i)
		std::cout << toUpperString(argv[i]);
	std::cout << std::endl;
	return (0);
}
