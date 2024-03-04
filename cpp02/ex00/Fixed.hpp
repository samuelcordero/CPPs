/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:29:38 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/04 16:33:24 by sacorder         ###   ########.fr       */
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
		Fixed(Fixed &f);
		~Fixed();
		Fixed &operator=(const Fixed &f);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif