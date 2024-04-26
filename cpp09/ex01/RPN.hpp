/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:29:39 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/26 12:31:14 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __RPN_H__
# define __RPN_H__

class RPN {
	private:
		/* data */
	public:
		RPN();
		RPN(/* data */);
		RPN(const RPN &other);
		~RPN();

		RPN	&operator=(const RPN &other);
};

#endif
