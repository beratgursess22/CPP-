/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 14:27:35 by igurses           #+#    #+#             */
/*   Updated: 2026/02/16 14:37:29 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main()
{
	std::cout << "=== TEST 1: Vector - Found ===" << std::endl;
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 3);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Not found: " << e.what() << std::endl;
	}

	std::cout << "\n=== TEST 2: Vector - Not Found ===" << std::endl;
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 99);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: Element not found" << std::endl;
	}

	std::cout << "\n=== TEST 3: List - Found ===" << std::endl;
	std::list<int> lst;
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);
	lst.push_back(40);
	lst.push_back(50);
	
	try
	{
		std::list<int>::iterator it = easyfind(lst, 30);
		std::cout << "Found: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Not found: " << e.what() << std::endl;
	}

	std::cout << "\n=== TEST 4: List - Not Found ===" << std::endl;
	try
	{
		std::list<int>::iterator it = easyfind(lst, 100);
		std::cout << "Found: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception caught: Element not found" << std::endl;
	}

	std::cout << "\n=== TEST 5: Deque - Found ===" << std::endl;
	std::deque<int> deq;
	deq.push_back(100);
	deq.push_back(200);
	deq.push_back(300);
	
	try
	{
		std::deque<int>::iterator it = easyfind(deq, 200);
		std::cout << "Found: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Not found: " << e.what() << std::endl;
	}

	std::cout << "\n=== TEST 6: Deque - Not Found ===" << std::endl;
	try
	{
		std::deque<int>::iterator it = easyfind(deq, 999);
		std::cout << "Found: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception caught: Element not found" << std::endl;
	}

	std::cout << "\n=== TEST 7: Empty Vector ===" << std::endl;
	std::vector<int> emptyVec;
	try
	{
		std::vector<int>::iterator it = easyfind(emptyVec, 1);
		std::cout << "Found: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception caught: Empty container" << std::endl;
	}

	std::cout << "\n=== TEST 8: First Element ===" << std::endl;
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 1);
		std::cout << "Found first element: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Not found: " << e.what() << std::endl;
	}

	std::cout << "\n=== TEST 9: Last Element ===" << std::endl;
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 5);
		std::cout << "Found last element: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Not found: " << e.what() << std::endl;
	}

	std::cout << "\n=== TEST 10: Single Element Container ===" << std::endl;
	std::vector<int> singleVec;
	singleVec.push_back(42);
	try
	{
		std::vector<int>::iterator it = easyfind(singleVec, 42);
		std::cout << "Found in single element: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Not found: " << e.what() << std::endl;
	}	
	return 0;
}