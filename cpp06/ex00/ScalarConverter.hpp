/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:26:34 by sacorder          #+#    #+#             */
/*   Updated: 2024/08/29 16:24:25 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __SCALARCONVERTER_H__
#  define __SCALARCONVERTER_H__
#  include <iostream>
#  include <cstdlib>
#  include <climits>

typedef enum e_types { CHAR, INT, FLOAT, DOUBLE, UNKNOWN }	t_types;

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &);
		ScalarConverter &operator=(const ScalarConverter &);
		
	public:
		~ScalarConverter();
		static void		convert(const std::string lit);
};

#endif
