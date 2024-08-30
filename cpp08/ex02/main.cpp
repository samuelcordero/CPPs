/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:45:43 by sacorder          #+#    #+#             */
/*   Updated: 2024/08/30 18:55:22 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int	main() {
	MutantStack<int> mstack;

	std::cerr << "- Mutant stack test:\n";
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top is: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size after pop: " << mstack.size() << std::endl;
	std::cout << "Top after pop: " << mstack.top() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Final content:" << std::endl;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::cerr << "- Stack from mutantStack test (as there are no iterators, values are reversed):\n";
	std::stack<int> s(mstack);
	while (!s.empty()) {
		std::cout << s.top() << std::endl;
		s.pop();
	}

	std::cerr << "- List test (output should be the same as mutantStack test):\n";
	std::list<int> l;
	l.push_back(5);
	l.push_back(17);
	std::cout << "Top is: " << l.back() << std::endl;
	l.pop_back();
	std::cout << "Size after pop: " << l.size() << std::endl;
	std::cout << "Top after pop: " << l.back() << std::endl;
	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	l.push_back(0);
	std::list<int>::iterator lit = l.begin();
	std::list<int>::iterator lite = l.end();
	++lit;
	--lit;
	std::cout << "Final content:" << std::endl;
	while (lit != lite) {
		std::cout << *lit << std::endl;
		++lit;
	}

	return (0);
}