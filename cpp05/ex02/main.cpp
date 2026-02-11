/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 12:51:33 by igurses           #+#    #+#             */
/*   Updated: 2026/02/11 13:46:37 by igurses          ###   ########.fr       */
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
        Bureaucrat bureaucrat("İbrahim", 2);
        std::cout << std::endl;
        bureaucrat.signForm(ShrubberyCreationForm);
        bureaucrat.executeForm(ShrubberyCreationForm);
        std::cout << std::endl;
        bureaucrat.signForm(RobotomyRequestForm);
        bureaucrat.executeForm(RobotomyRequestForm);
        std::cout << std::endl;
        bureaucrat.signForm(PresidentialPardonForm);
        bureaucrat.executeForm(PresidentialPardonForm);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}
