/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:32:51 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/18 12:41:22 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() { std::cout << "Default cons for Brain\n"; }

Brain::Brain(const Brain &cp) {
	std::cout << "Copy cons for Brain\n";
	for (int i = 0; i < 100; ++i)
		ideas[i] = cp.ideas[i];
}

Brain::~Brain() {
	std::cout << "Destructor for Brain\n";
}

Brain	&Brain::operator=(const Brain &cp) {
	if (this == &cp)
		return (*this);
	for (int i = 0; i < 100; ++i)
		ideas[i] = cp.ideas[i];
	return (*this);
}
