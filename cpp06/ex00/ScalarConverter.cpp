/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:52:58 by igurses           #+#    #+#             */
/*   Updated: 2026/02/03 16:27:02 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"  

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    (void)other;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    (void)other;
    return *this;
}

ScalarConverter::~ScalarConverter() {}


void ScalarConverter::convert(const std::string& literal)
{
   std::cout << "Converting literal: " << literal << std::endl;
   
}