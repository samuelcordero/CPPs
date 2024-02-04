/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:15:57 by sacorder          #+#    #+#             */
/*   Updated: 2024/02/04 17:20:51 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
	for (int i = 1; i < argc; ++i)
	{
		std::cout << argv[i] << std::endl;
	}
	return (0);
}