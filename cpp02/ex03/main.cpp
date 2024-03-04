/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:41:30 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/04 18:02:15 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const p) {
	Fixed	pab = Point::Area(p, a, b);
	Fixed	pbc = Point::Area(p, b, c);
	Fixed	pac = Point::Area(p, a, c);
	Fixed	abc = Point::Area(a, b, c);
	Fixed	tolerance;

	tolerance.setRawBits(1);

	if (((pab + pbc + pac) - abc) > tolerance) 
		return (false);
	return (true);
}

int main(void) {
	Point	a;
	Point	b(1.0f, 1.0f);
	Point	c(1.0f, 0.0f);
	Point	x(1.1f, 0.2f);

	if (bsp(a, b, c, x))
		std::cout << "Point is inside the triangle\n";
	else
		std::cout << "Point is outside the triangle\n";
	return (0);
}