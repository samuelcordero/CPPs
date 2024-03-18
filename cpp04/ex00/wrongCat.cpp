/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:00:04 by sacorder          #+#    #+#             */
/*   Updated: 2024/03/18 12:20:28 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongCat.hpp"

wrongCat::wrongCat(): wrongAnimal() {
	std::cout << "Default cons for wrongCat\n";
	type = "wrongCat";
}

wrongCat::wrongCat(const wrongCat &cp): wrongAnimal() {
	std::cout << "Copy cons for wrongCat\n";
	type = cp.type;
}

wrongCat::~wrongCat() { std::cout << "wrongCat destructor\n"; }

wrongCat	&wrongCat::operator=(const wrongCat &cp) {
	if (&cp == this)
		return (*this);
	type = cp.type;
	return (*this);
}
