/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 12:51:46 by igurses           #+#    #+#             */
/*   Updated: 2026/01/20 14:15:35 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("Deafult Target"){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137) , target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), target(other.target){}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if(this != &other)
    {
        AForm::operator=(other);
        this->target = other.target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm:: executeAction() const 
{
    std::ofstream outfile((target + "_shrubbery").c_str());
    if (!outfile)
    {
        std::cerr << "Error creating file!" << std::endl;
        return;
    }
    outfile << "              v .   ._, |_  .," << std::endl;
    outfile << "           `-._\\/  .  \\ /    |/_" << std::endl;
    outfile << "               \\\\  _\\, y | \\//" << std::endl;
    outfile << "         _\\_.___\\\\, \\\\/ -.\\||" << std::endl;
    outfile << "           `7-,--.`._||  / / ," << std::endl;
    outfile << "           /'     `-. `./ / |/_.'" << std::endl;
    outfile << "                     |    |//" << std::endl;
    outfile << "                     |_    /|" << std::endl;
    outfile << "                     |-   | |" << std::endl;
    outfile << "                     |   =| |" << std::endl;
    outfile << "                     |    | |" << std::endl;
    outfile << "--------------------/ ,  . \\--------._" << std::endl;

    outfile.close();
}