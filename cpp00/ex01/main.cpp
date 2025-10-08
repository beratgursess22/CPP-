/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:30:12 by igurses           #+#    #+#             */
/*   Updated: 2025/10/08 14:06:37 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool safeGetline(const std::string& prompt, std::string& input) {
    std::cout << prompt;
    if (!std::getline(std::cin, input))
        return false;
    return true;
}

void controlSignal() {
    if (std::cin.eof()) {
        std::cout << "\nEnd of input detected. Exiting the application." << std::endl;
        exit(0);
    }
}

void takeInput(PhoneBook& phoneBook)
{
    Contact newContact;
    std::string input;

    if (safeGetline("Enter First Name: ", input) == false)
        controlSignal();
    newContact.setFirstName(input);         
    if (safeGetline("Enter Last Name: ", input) == false)
        controlSignal();
    newContact.setLastName(input); 
    if (safeGetline("Enter Nick Name: ", input) == false)
        controlSignal();
    newContact.setNickName(input);
    if (safeGetline("Enter Phone Number: ", input) == false)
        controlSignal();
    newContact.setPhoneNumber(input);
    if (safeGetline("Enter Darkest Secret: ", input) == false)
        controlSignal();
    newContact.setDarkestSecret(input);
    phoneBook.addContact(newContact);
}

int main()
{
    PhoneBook phoneBook;
    std::string command;

    std::cout << "Welcome to the PhoneBook application!" << std::endl;
    while (1)
    {
        std::cout << "Please enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        controlSignal();
        if (command == "EXIT")
        {
            std::cout << "Exiting the application. Goodbye!" << std::endl;
            break;
        }
        else if(command == "ADD")
            takeInput(phoneBook);
        // else if(command == "SEARCH")
        // {
        //     phoneBook.displayContacts();
        // }
        else
            std::cout << "Invalid command. Please try again." << std::endl;
    }
    return 0;
}