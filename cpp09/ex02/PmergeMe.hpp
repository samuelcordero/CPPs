/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:32:23 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/26 12:34:00 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __PMERGEME_H__
# define __PMERGEME_H__

class PmergeMe {
	private:
		/* data */
	public:
		PmergeMe();
		PmergeMe(/* args */);
		PmergeMe(const PmergeMe &other);
		~PmergeMe();

		PmergeMe	&operator=(const PmergeMe &other);
};

#endif
