/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacorder <sacorder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:32:23 by sacorder          #+#    #+#             */
/*   Updated: 2024/09/08 12:36:30 by sacorder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __PMERGEME_H__
# define __PMERGEME_H__
# include <vector>
# include <list>
# include <stdexcept>
# include <iostream>
# include <cstdlib>
# include <ctime>

class PmergeMe {
	private:
		std::list<int>		list;
		std::vector<int>	vector;
	public:
		PmergeMe();
		PmergeMe(char **args);
		PmergeMe(const PmergeMe &other);
		~PmergeMe();

		PmergeMe	&operator=(const PmergeMe &other);
};

bool	checkArg(const std::string &arg);

template<typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
void compareAndSwap(T& a, T& b) // insertion sort for two elements
{
	if (a > b)
		swap(a, b);
}

template<typename T>
void sortThree(T& cont) // insertion sort for three elems
{
	typename T::iterator first = cont.begin();
	typename T::iterator second = first;
	++second;
	typename T::iterator third = second;
	++third;

	compareAndSwap(*first, *second);
	compareAndSwap(*second, *third);
	compareAndSwap(*first, *second);
}

template<typename T>
void merge(T& left, T& right, T& result) // merges two sorted halves
{
	result.clear();
	typename T::iterator leftIt = left.begin();
	typename T::iterator rightIt = right.begin();

	// merge from both halves
	while (leftIt != left.end() && rightIt != right.end())
	{
		if (*leftIt < *rightIt)
			result.push_back(*leftIt++);
		else
			result.push_back(*rightIt++);
	}

	// remaining elements
	while (leftIt != left.end())
		result.push_back(*leftIt++);

	while (rightIt != right.end())
		result.push_back(*rightIt++);
}

template<typename T>
void fordJohnsonSort(T& cont)
{
	if (cont.size() == 1) // base case 1
	{
		return;
	}
	
	if (cont.size() == 2) // base case 2
	{
		typename T::iterator first = cont.begin();
		typename T::iterator second = first;
		++second;
		compareAndSwap(*first, *second); 
		return;
	}

	if (cont.size() == 3) // base case 3
	{
		sortThree(cont);
		return;
	}


	// halve the containers; recursive call
	typename T::iterator middle = cont.begin();
	std::advance(middle, cont.size() / 2);

	T leftHalf(cont.begin(), middle);
	T rightHalf(middle, cont.end());

	fordJohnsonSort(leftHalf);
	fordJohnsonSort(rightHalf);

	// merge result of recursive calls
	merge(leftHalf, rightHalf, cont);
}

#endif
