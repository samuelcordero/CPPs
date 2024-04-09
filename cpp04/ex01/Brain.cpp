/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:32:51 by sacorder          #+#    #+#             */
/*   Updated: 2024/04/10 00:16:11 by sacorder         ###   ########.fr       */
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
	if (this != &cp) {
		for (int i = 0; i < 100; ++i)
			ideas[i] = cp.ideas[i];
	}
	return (*this);
}

void	Brain::setIdea(int idx, const std::string idea) {
	if (idx < 100)
		ideas[idx] = idea;
}

void	Brain::printBrain() {
	std::cout << "Brain content:\n";
	for (int i = 0; i < 100; ++i)
		std::cout << i << ": " << ideas[i] << std::endl;
	std::cout <<  "------ Brain end ------\n";
}
