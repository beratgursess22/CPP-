/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 23:39:46 by igurses           #+#    #+#             */
/*   Updated: 2026/02/16 00:08:48 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename F>
void printInt(F &n)
{
	std::cout << n << " ";
}
template <typename F>
void increment( F &n)
{
	n++;
}

int main()
{
	int intArray[] = {1, 2, 3, 4, 5};
	char charArray[] = {'a', 'b', 'c', 'd', 'e'};
	std::cout << "Original int array: ";
	iter(intArray, 5, printInt<int>);
	std::cout << "\nOriginal char array: ";
	iter(charArray, 5, printInt<char>);
	std::cout << "\nIncrementing int array...\n";
	iter(intArray, 5, increment<int>);
	std::cout << "Incrementing char array...\n";
	iter(charArray, 5, increment<char>);
	std::cout << "Modified int array: ";
	iter(intArray, 5, printInt<int>);
	std::cout << "\nModified char array: ";
	iter(charArray, 5, printInt<char>);
	std::cout << std::endl;
}