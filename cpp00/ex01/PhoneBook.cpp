/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:13:05 by igurses           #+#    #+#             */
/*   Updated: 2025/10/08 13:28:54 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->contactCount = 0;
}
PhoneBook::~PhoneBook() {}

void PhoneBook::addContact(const Contact& newContact)
{
    if (this->contactCount < 8)
    {
        this->contacts[this->contactCount] = newContact;
        this->contactCount++;
    }
    else
    {
        int i;
        i = 1;
        while (i < 8)
        {
            this->contacts[i - 1] = this->contacts[i];
            i++;
        }
        this->contacts[7] = newContact;
    }
}

