/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:18:12 by igurses           #+#    #+#             */
/*   Updated: 2025/10/12 17:34:44 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) 
{
    std::string str;
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    str = "HI THIS IS BRAIN";
    std::cout << "memory of stringPTR:  " << *stringPTR << std::endl;
    std::cout << "memory of stringPTR:  " << stringPTR << std::endl;
    std::cout << "memory of stringPTR:  " << &stringPTR << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "memory of stringREF:  " << stringREF << std::endl;
    std::cout << "memory of stringREF:  " << &stringREF << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "memory of str:  " << str << std::endl;
    std::cout << "memory of str:  " << &str << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;

    std::cout << "The memory address of the string variable. " << &str << std::endl;
    std::cout << "The memory address held by stringPTR. " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF. " << &stringREF << std::endl;
    std::cout << "The value of the string variable. " << str << std::endl;
    std::cout << "The value pointed to by stringPTR. " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF. " << stringREF << std::endl;
    
    return 0;
}