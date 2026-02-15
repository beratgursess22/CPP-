/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 00:17:19 by igurses           #+#    #+#             */
/*   Updated: 2026/02/16 00:20:58 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int main()
{
	Array<int> intArray(5);
	Array<char> charArray(5);
	for (unsigned int i = 0; i < intArray.getSize(); i++)
		intArray[i] = i + 1;
	for (unsigned int i = 0; i < charArray.getSize(); i++)
		charArray[i] = 'a' + i;
	std::cout << "Integer Array: ";
	for (unsigned int i = 0; i < intArray.getSize(); i++)
		std::cout << intArray[i] << " ";
	std::cout << "\nCharacter Array: ";
	for (unsigned int i = 0; i < charArray.getSize(); i++)
		std::cout << charArray[i] << " ";
	std::cout << std::endl;
	return 0;
}