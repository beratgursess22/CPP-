/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:24:35 by igurses           #+#    #+#             */
/*   Updated: 2026/02/07 18:03:32 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main ()
{
    try 
    {
        Bureaucrat b1("Alice", 2);
        std::cout <<b1 << std::endl;
        b1.incrementGrade();
        std::cout << b1 << std::endl;
        Bureaucrat b2("Bob", 149);
        std::cout << b2 << std::endl;
        b2.decrementGrade();
        std::cout << b2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat b3("Charlie", 1);
        b3.incrementGrade();
        std::cout << b3 << std::endl;   
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}