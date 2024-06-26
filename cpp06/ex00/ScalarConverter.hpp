/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:26:34 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/24 12:31:56 by sacorder         ###   ########.fr       */
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
		/* data */
	public:
		virtual ~ScalarConverter() = 0;
		static void		convert(const std::string lit);
};

#endif
