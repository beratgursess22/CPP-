/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:14:55 by igurses           #+#    #+#             */
/*   Updated: 2026/01/19 18:40:03 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{
    try 
    {
        Form formA("Form A", 50, 30);
        Bureaucrat bob("Bob", 55);
        std::cout << bob;
        std::cout << formA;
        formA.singForm(bob);
        std::cout << formA;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}