/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 15:23:20 by igurses           #+#    #+#             */
/*   Updated: 2026/03/01 16:21:09 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	std::cout << "=== TEST 1: Subject ===" << std::endl;
	try
	{
		Span	sp(5) ;
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n=== TEST 2: addRange() with Vector ===" << std::endl;
	try
	{
		std::vector<int> numbers;
		numbers.push_back(5);
		numbers.push_back(10);
		numbers.push_back(15);
		numbers.push_back(20);
		numbers.push_back(25);
		
		Span sp(5);
		sp.addRange(numbers.begin(), numbers.end());
		
		std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest: " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n=== TEST 3: addRange() with Vector ===" << std::endl;
	try
	{
		std::vector<int> numbers;
		numbers.push_back(5);
		// numbers.push_back(10);
		
		Span sp(5);
		sp.addRange(numbers.begin(), numbers.end());
		
		std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest: " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}