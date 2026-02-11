/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:20:51 by igurses           #+#    #+#             */
/*   Updated: 2026/02/11 13:48:34 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"
#include "AForm.hpp"

int main()
{
    Intern intern;
    AForm* form1 = intern.makeForm("Shrubbery CreationForm", "home");
    AForm* form2 = intern.makeForm("Robotomy RequestForm", "Bender");
    AForm* form3 = intern.makeForm("Presidential PardonForm", "Alice");
    AForm* form4 = intern.makeForm("UnknownForm", "Bob");

    form1->beSigned(Bureaucrat("ibrahim", 1));
    form1->execute(Bureaucrat("ibrahim", 1));
    form2->beSigned(Bureaucrat("Berat", 1));
    form2->execute(Bureaucrat("Berat", 1));
    form3->beSigned(Bureaucrat("Gurses", 1));
    form3->execute(Bureaucrat("Gurses",1));

    delete form1;
    delete form2;
    delete form3;
    if (form4)
    {
        std::cout<< "Form4 created successfully." << std::endl;
        delete form4;    
    } 

    return 0;
}