/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:54:10 by igurses           #+#    #+#             */
/*   Updated: 2026/02/07 19:33:22 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() 
{
    std::cout << "Intern default constructor called" << std::endl;
}
 Intern::Intern(const Intern& other)
 {
    std::cout << "Intern copy constructor called" << std::endl;
    (void)other;
 }

Intern& Intern::operator=(const Intern& other)
{
    std::cout << "Intern copy assignment operator called" << std::endl;
    (void)other;
    return *this;
}
Intern::~Intern() 
{
    std::cout << "Intern destructor called" << std::endl;
}


AForm* Intern::makeForm(const std::string& formName, const std::string& target) 
{
    std::string formNames[3] = {"Shrubbery CreationForm", "Robotomy RequestForm", "Presidential PardonForm"};
    int index = -1;
    for (int i = 0; i < 3; i++) 
    {
        if (formName == formNames[i]) 
        {
            index = i;
            break;
        }
    }
    switch (index)
    {
        case 0:
            std::cout << "Intern creates " << formNames[0] << std::endl;
            return new ShrubberyCreationForm(target);
        case 1:
            std::cout << "Intern creates " << formNames[1] << std::endl;
            return new RobotomyRequestForm(target);
        case 2:
            std::cout << "Intern creates " << formNames[2] << std::endl;
            return new PresidentialPardonForm(target);
        default:
            std::cout << "Intern cannot create " << formName << " because it is unknown form" << std::endl;
            return 0;
    } 
    return 0;
}



