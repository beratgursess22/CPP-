/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:20:51 by igurses           #+#    #+#             */
/*   Updated: 2026/02/03 13:34:55 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"
#include "AForm.hpp"

int main()
{
    Intern intern;
    AForm* form1 = intern.makeForm("ShrubberyCreationForm", "home");
    AForm* form2 = intern.makeForm("RobotomyRequestForm", "Bender");
    AForm* form3 = intern.makeForm("PresidentialPardonForm", "Alice");
    AForm* form4 = intern.makeForm("UnknownForm", "Bob");

    form1->beSigned(Bureaucrat("John", 1));
    form1->execute(Bureaucrat("John", 1));
    form2->beSigned(Bureaucrat("Jane", 1));
    form2->execute(Bureaucrat("Jane", 1));
    form3->beSigned(Bureaucrat("Mike", 1));
    form3->execute(Bureaucrat("Mike", 1));

    delete form1;
    delete form2;
    delete form3;
    delete form4;

    return 0;
}