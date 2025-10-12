/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:30:12 by igurses           #+#    #+#             */
/*   Updated: 2025/10/12 13:20:26 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

bool safeGetline(const std::string& prompt, std::string& input) 
{
    std::cout << prompt;
    if (!std::getline(std::cin, input))
        return false;
    return true;
}

void controlSignal()
{
    if (std::cin.eof()) 
    {
        std::cout << "\nEnd of input detected. Exiting the application." << std::endl;
        exit(0);
    }
}

std::string getValidInput(const std::string& prompt) 
{
    std::string input;
    
    while (true) 
    {
        if (safeGetline(prompt, input) == false)
            controlSignal();
        if (!input.empty())
            break;
        std::cout << "Lütfen boş geçmeyin!" << std::endl;
    }
    return input;
}

void takeInput(PhoneBook& phoneBook)
{
    Contact newContact;

    newContact.setFirstName(getValidInput("Enter First Name: "));
    newContact.setLastName(getValidInput("Enter Last Name: "));
    newContact.setNickName(getValidInput("Enter Nick Name: "));
    newContact.setPhoneNumber(getValidInput("Enter Phone Number: "));
    newContact.setDarkestSecret(getValidInput("Enter Darkest Secret: "));

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
        else if(command == "SEARCH")
            phoneBook.display();
        else
            std::cout << "Invalid command. Please try again." << std::endl;
    }
    return 0;
}