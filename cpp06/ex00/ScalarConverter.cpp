/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:27:43 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/24 12:28:01 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	checkChar(std::string str)
{
	return (str.length() == 3 && str[0] == '\'' && str[2] == '\'');
}

bool	checkInt(std::string str)
{
	if (!isdigit(str[0]) && str[0] != '+' && str[0] != '-')
		return (false);
	if ((str[0] == '+' || str[0] == '-') && str.length() <= 1)
		return (false);
	for (size_t i = 1; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}

bool	checkFloat(std::string str)
{
	size_t	i;
	bool	d = false;

	if (!isdigit(str[0]) && str[0] != '+' && str[0] != '-')
		return (false);
	if ((str[0] == '+' || str[0] == '-') && str.length() <= 1)
		return (false);
	for (i = 1; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
		{
			if (i == str.length() - 1)
				return (str[i] == 'f');
			if (str[i] == '.')
			{
				if (d)
					return (false);
				d = true;
			}
			else
				return (false);
		}
	}
	return (false);
}

bool	checkDouble(std::string str)
{
	size_t	i;
	bool	d = false;

	if (!isdigit(str[0]) && str[0] != '+' && str[0] != '-')
		return (false);
	if ((str[0] == '+' || str[0] == '-') && str.length() <= 1)
		return (false);
	for (i = 1; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
		{
			if (str[i] == '.')
			{
				if (d)
					return (false);
				d = true;
			}
			else
				return (false);
		}
	}
	return (true);
}

t_types	checkException(std::string str)
{
	if (!str.compare("-inff") || !str.compare("+inff") || !str.compare("nanf"))
		return (FLOAT);
	if (!str.compare("-inf") || !str.compare("+inf") || !str.compare("nan"))
		return (DOUBLE);
	return (UNKNOWN);
}

static t_types	getType(const std::string lit) {
	t_types i;

	if ((i = checkException(lit)) != UNKNOWN)
		return (i);
	if (checkChar(lit))
		return (CHAR);
	if (checkInt(lit))
		return (INT);
	if (checkFloat(lit))
		return (FLOAT);
	if (checkDouble(lit))
		return (DOUBLE);
	return (UNKNOWN);
}

static void	fromChar(const std::string lit) {
	char c = lit[1];
	if (static_cast<int> (c) < 32 || static_cast<int> (c)  > 126)
		std::cout << "char: can't display" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(c) << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

static void	fromInt(const std::string lit) {
	double d = strtod(lit.c_str(), NULL);

	if ( d < 0. || d > 255.)
		std::cout << "char: overflow" << std::endl;
	else if (d < 32. || d > 126.)
		std::cout << "char: can't display" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(d) << std::endl;

	if ( d < static_cast<double> (INT_MIN) || d > static_cast<double> (INT_MAX))
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;

	std::cout << "float: " << static_cast<float>(d) << std::endl;
	std::cout << "double: " << static_cast<double>(d) << std::endl;
}

static void	fromFloat(const std::string lit) {
	float d = strtof(lit.c_str(), NULL);
	if (!lit.compare("nanf"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << static_cast<float>(d) << std::endl;
		std::cout << "double: " << static_cast<double>(d) << std::endl;
		return;
	}
	if ( d < 0. || d > 255.)
		std::cout << "char: overflow" << std::endl;
	else if (d < 32. || d > 126.)
		std::cout << "char: can't display" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(d) << std::endl;

	if ( d < static_cast<double> (INT_MIN) || d > static_cast<double> (INT_MAX))
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;

	std::cout << "float: " << static_cast<float>(d) << std::endl;
	std::cout << "double: " << static_cast<double>(d) << std::endl;
}

static void	fromDouble(const std::string lit){
	double d = strtod(lit.c_str(), NULL);

	if (!lit.compare("nan"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << static_cast<float>(d) << std::endl;
		std::cout << "double: " << static_cast<double>(d) << std::endl;
		return;
	}

	if ( d < 0. || d > 255.)
		std::cout << "char: overflow" << std::endl;
	else if (d < 32. || d > 126.)
		std::cout << "char: can't display" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(d) << std::endl;

	if ( d < static_cast<double> (INT_MIN) || d > static_cast<double> (INT_MAX))
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;

	std::cout << "float: " << static_cast<float>(d) << std::endl;
	std::cout << "double: " << static_cast<double>(d) << std::endl;
}

void	ScalarConverter::convert(const std::string lit) {
	t_types type = getType(lit);

	if (type == CHAR) {
		fromChar(lit);
	} else if (type == INT) {
		fromInt(lit);
	} else if (type == FLOAT) {
		fromFloat(lit);
	} else if (type == DOUBLE) {
		fromDouble(lit);	
	} else {
		std::cout << "Can't convert!" << std::endl;
	}
}