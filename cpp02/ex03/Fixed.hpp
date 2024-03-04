/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:29:38 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/04 16:36:56 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __FIXED_H__
#  define __FIXED_H__
#  include <iostream>

class Fixed {
	private:
		int					value;
		static const int	fract_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &f);
		Fixed(const int n);
		Fixed(const float n);
		~Fixed();

		Fixed	&operator=(const Fixed &f);
		Fixed	operator+(const Fixed &f) const;
		Fixed	operator-(const Fixed &f) const;
		Fixed	operator*(const Fixed &f) const;
		Fixed	operator/(const Fixed &f) const;
		Fixed	&operator++();
		Fixed	&operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		bool	operator>(const Fixed &f) const;
		bool	operator<(const Fixed &f) const;
		bool	operator<=(const Fixed &f) const;
		bool	operator>=(const Fixed &f) const;
		bool	operator==(const Fixed &f) const;
		bool	operator!=(const Fixed &f) const;

		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);

#endif