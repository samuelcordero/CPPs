/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:27:43 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/08 15:48:34 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

char	ScalarConverter::convertChar(const std::string lit) {
	int	c = atoi(lit.c_str());
	return ((char) c);
}

int	ScalarConverter::convertInt(const std::string lit) {
	return (atoi(lit.c_str()));
}

float	ScalarConverter::convertFloat(const std::string lit) {
	float	f = (float) atof(lit.c_str());
	return (f);
}

double	ScalarConverter::convertDouble(const std::string lit) {
	double	d = atof(lit.c_str());
	return (d);
}
