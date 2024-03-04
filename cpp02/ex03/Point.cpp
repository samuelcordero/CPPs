/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:52:17 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/04 18:03:03 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(float x, float y) : x(x), y(y) {}

Point::Point(const Point &p) : x(p.x), y(p.y) {}

Point::~Point() {}


Fixed	Point::getX() const {
	return (x);
}

Fixed	Point::getY() const {
	return (y);
}

Fixed	Point::Area(Point const a, Point const b, Point const c) {
	Fixed res((Fixed(0.5f) * ((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY())))));
	if (res > 0)
		return (res);
	return (res * Fixed(-1));
}

Point	&Point::operator=(const Point &p) {
	//std::cout << "Copy operator for Point called\n";
	Point res;
	if (this == &p)
		return (*this);
	return (*this);
}
