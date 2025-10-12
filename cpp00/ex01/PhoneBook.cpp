/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:13:05 by igurses           #+#    #+#             */
/*   Updated: 2025/10/12 13:22:34 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

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
    std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::display() const
{
    int i;

    i = 0;
    if (this->contactCount == 0)
    {
        std::cout << "No contacts available!" << std::endl;
        return;
    }
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "| Index | First Name | Last Name | Nickname |" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    while (i < this->contactCount)
    {
        std::string firstName;
        std::string lastName;
        std::string nickName;
        if (this->contacts[i].getFirstName().length() > 10)
            firstName = this->contacts[i].getFirstName().substr(0, 9) + ".";
        else
            firstName = this->contacts[i].getFirstName();
        if (this->contacts[i].getLastName().length() > 10)
            lastName = this->contacts[i].getLastName().substr(0, 9) + ".";
        else
            lastName = this->contacts[i].getLastName();
        if (this->contacts[i].getNickName().length() > 10)
            nickName = this->contacts[i].getNickName().substr(0, 9) + ".";
        else
            nickName = this->contacts[i].getNickName();
        std::cout << "| " << i + 1 << "     | " << firstName << " | ";
        std::cout << lastName << " | " << nickName << " |" << std::endl;
        i++;
    }
    std::cout << "-------------------------------------------" << std::endl;
    getContactIndex();
}

void PhoneBook::getContactIndex() const
{
    std::string indexStr;
    bool validIndex;
    int index;
    int actualIndex;
    size_t i;
    
    std::cout << "Enter the index of the entry to display: ";
    std::getline(std::cin, indexStr);
    i = 0;
    index = 0;
    validIndex = true;
    
    if (indexStr.empty())
        validIndex = false;
    else
    {
        while (i < indexStr.length())
        {
            if (!isdigit(indexStr[i]))
            {
                validIndex = false;
                break;
            }
            i++;
        }
        if (validIndex)
            index = std::atoi(indexStr.c_str());
    }
    if (!validIndex)
    {
        std::cout << "Invalid input! Please enter a valid number." << std::endl;
        return;
    }
    if (index < 1 || index > this->contactCount)
    {
        std::cout << "Invalid index! Please enter a number between 1 and " << this->contactCount << std::endl;
        return;
    }
    actualIndex = index - 1;
    std::cout << "\n--- Contact Details ---" << std::endl;
    std::cout << "First Name: " << this->contacts[actualIndex].getFirstName() << std::endl;
    std::cout << "Last Name: " << this->contacts[actualIndex].getLastName() << std::endl;
    std::cout << "Nickname: " << this->contacts[actualIndex].getNickName() << std::endl;
    std::cout << "Phone Number: " << this->contacts[actualIndex].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << this->contacts[actualIndex].getDarkestSecret() << std::endl;
    std::cout << "----------------------" << std::endl;
}