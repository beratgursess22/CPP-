/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    PmergeMe.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:05:15 by igurses           #+#    #+#             */
/*   Updated: 2026/04/22 14:07:11 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &other) 
{
	*this = other;
	vec = other.vec;
	deq = other.deq;	
}
PmergeMe &PmergeMe::operator=(const PmergeMe &other) 
{
	if (this != &other)
	{
		vec = other.vec;
		deq = other.deq;
	}
	return *this;
}

PmergeMe::~PmergeMe() {}
