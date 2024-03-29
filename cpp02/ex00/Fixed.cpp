/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:33:40 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/01 12:49:50 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Def constructor for Fixed called\n";
	value = 0;
}

Fixed::Fixed(Fixed &f) {
	std::cout << "Copy constructor for Fixed called\n";
	value = f.value;
}

Fixed::~Fixed() {
	std::cout << "Destructor Fixed called\n";
}

Fixed &Fixed::operator=(const Fixed &f) {
	std::cout << "Copy operator for Fixed object called\n";
	this->value = f.value;
	return (*this);
}

int	Fixed::getRawBits(void) const {
	std::cout << "Fixed::getRawBits called\n";
	return value;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "Fixed::setRawBits called\n";
	value = raw;
}
