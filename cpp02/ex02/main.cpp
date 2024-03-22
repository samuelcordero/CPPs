/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:41:30 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/22 12:45:00 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void) {
	Fixed 		a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed 		c = Fixed(1.5f);
	Fixed const d(Fixed(3) / c);

	std::cout << "Value of a " << a << std::endl;
	std::cout << "Using preinc in a: " << ++a << std::endl;
	std::cout << "Using postdec in a: " << a-- <<std::endl;;
	std::cout << "Using postinc in a: " << a++ << std::endl;
	std::cout << "Value of d is " << d << std::endl;
	std::cout << "Value of a + c " << a + c << std::endl;
	std::cout << "Value of a / c " << a / c << std::endl;
	std::cout << "Value of a * c " << a * c << std::endl;
	std::cout << "Value of a - c " << a - c << std::endl;

	if (d > c)
		std::cout << "d is greater than c\n";

	if (c == c)
		std::cout << "c equals c\n";

	if (d != c)
		std::cout << "d does not equal c\n";

	if (d >= c)
		std::cout << "d is greater or equal c\n";

	if (c <= d)
		std::cout << "c is less or equal d\n";

	if (c < d)
		std::cout << "c is less than d\n";

	std::cout << "Using predec on a " << --a << std::endl;
	std::cout << "Value of a is " << a << std::endl;
	std::cout << "Value of b is " << b << std::endl;

	std::cout << "Max between a and b is " << Fixed::max(a, b) << std::endl;
	std::cout << "Min between a and b is " << Fixed::min(a, b) << std::endl;

	return (0);
}