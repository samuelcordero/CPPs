/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:52:34 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/04 18:02:53 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __POINT_H__
#  define __POINT_H__
#  include "Fixed.hpp"

class Point {
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(float x, float y);
		Point(const Point &p);
		~Point();

		Fixed	getX() const;
		Fixed	getY() const;

		static Fixed	Area(Point const a, Point const b, Point const c);

		Point	&operator=(const Point &p);
};

#endif