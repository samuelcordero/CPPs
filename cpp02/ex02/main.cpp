/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:41:30 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/04 16:26:02 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void) {
	Fixed 		a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed 		c = Fixed(1.5f);
	Fixed const d(Fixed(3) / c);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a-- <<std::endl << a++ << std::endl;
	std::cout << a + c << std::endl;
	std::cout << "Value of d is " << d << std::endl;

	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;

	return (0);
}