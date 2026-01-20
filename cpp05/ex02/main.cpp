/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 12:51:33 by igurses           #+#    #+#             */
/*   Updated: 2026/01/20 14:45:41 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"   
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp" 
#include <iostream> 
#include "PresidentialPardonForm.hpp"


int main()
{
    try{
        ShrubberyCreationForm ShrubberyCreationForm("home");
        RobotomyRequestForm RobotomyRequestForm("Bender");
        PresidentialPardonForm PresidentialPardonForm("Marvin");        
        Bureaucrat bureaucrat("Bureaucrat", 30);
        bureaucrat.signForm(ShrubberyCreationForm);
        ShrubberyCreationForm.execute(bureaucrat);
        bureaucrat.signForm(RobotomyRequestForm);
        RobotomyRequestForm.execute(bureaucrat);
        bureaucrat.signForm(PresidentialPardonForm);
        PresidentialPardonForm.execute(bureaucrat);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}
