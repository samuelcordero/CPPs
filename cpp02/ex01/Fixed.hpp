/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:29:38 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/04 12:38:30 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
# define __FIXED_H__
# include <iostream>

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
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);

#endif