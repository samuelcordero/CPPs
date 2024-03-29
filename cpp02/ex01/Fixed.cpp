/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:33:40 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/04 12:47:33 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Def constructor for Fixed called\n";
	value = 0;
}

Fixed::Fixed(const Fixed &f) {
	std::cout << "Copy constructor for Fixed called\n";
	value = f.value;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor for Fixed called\n";
	value = n << fract_bits; 
}

Fixed::Fixed(const float n) {
	std::cout << "Float constructor for Fixed called\n";
	value = (int)(n * (1 << fract_bits));
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

int	Fixed::toInt(void) const {
	return (value >> fract_bits);
}

float	Fixed::toFloat(void) const {
	return ((float) value / (1 << fract_bits));
}

std::ostream	&operator<<(std::ostream &out, const Fixed &f) {
	//std::cout << "Out stream operator for Fixed object called\n";
	out << f.toFloat();
	return (out);
}
