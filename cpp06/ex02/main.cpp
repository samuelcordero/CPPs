/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:56:08 by sacorder          #+#    #+#             */
/*   Updated: 2024/08/29 15:39:24 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

Base	*generate(void) {
	std::srand(std::time(NULL));

	int choice = std::rand() % 3;

	switch (choice) {
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
		default:
			return NULL;
	}
}

void	identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "Object is of type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Object is of type B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Object is of type C" << std::endl;
}

void	identify(Base& p) {
	try {
		A &a = dynamic_cast<A&>(p);
		(void) a;
		std::cout << "Object is of type A" << std::endl;
	} catch(const std::exception &e) {
		try {
			B &b = dynamic_cast<B&>(p);
			(void) b;
			std::cout << "Object is of type B" << std::endl;
		} catch(const std::exception &e) {
			try {
				C &c = dynamic_cast<C&>(p);
				(void) c;
				std::cout << "Object is of type C" << std::endl;
			} catch(const std::exception &e) {
				std::cout << "Object is of UNKNOWN type" << std::endl;
			}
		}
	}
}

int main() {
	Base *obj;

	obj = generate();
	identify(obj);
	identify(*obj);
	delete obj;
	return (0);
}