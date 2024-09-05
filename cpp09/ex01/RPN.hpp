/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:29:39 by sacorder          #+#    #+#             */
/*   Updated: 2024/09/05 12:35:47 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __RPN_H__
# define __RPN_H__
# include <stack>
# include <string>
# include <stdexcept>

class RPN {
	private:
		std::stack<int>	stash;

		void	parse(const std::string& opQuery);
		bool	isOperator(char c);
	public:
		RPN();
		RPN(const RPN &other);
		~RPN();

		RPN		&operator=(const RPN &other);
		int		calculate(const std::string& opQuery);
};

#endif
