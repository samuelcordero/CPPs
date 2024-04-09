/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:26:34 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/08 15:48:15 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __SCALARCONVERTER_H__
#  define __SCALARCONVERTER_H__
#  include <string>
#  include <cstdlib>

class ScalarConverter {
	private:
		/* data */
	public:
		static char		convertChar(const std::string lit);
		static int		convertInt(const std::string lit);
		static float	convertFloat(const std::string lit);
		static double	convertDouble(const std::string lit);
};

#endif
