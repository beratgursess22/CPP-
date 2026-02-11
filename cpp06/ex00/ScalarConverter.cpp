/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:52:58 by igurses           #+#    #+#             */
/*   Updated: 2026/02/11 16:39:25 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>
#include <cerrno>
#include <cmath>
#include <iomanip>

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

static int getType(const std::string& literal)
{
    if (literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'')
        return 0; 
    
    if (literal == "nan" || literal == "nanf" || 
        literal == "+inf" || literal == "-inf" || 
        literal == "+inff" || literal == "-inff" ||
        literal == "inf" || literal == "inff")
        return 3;
    
    if (literal[literal.length() - 1] == 'f')
        return 2; 
    
    bool hasDecimal = false;
    size_t i = 0;
    if (literal[0] == '+' || literal[0] == '-')
        i = 1;
    for (; i < literal.length(); i++)
    {
        if (literal[i] == '.')
            hasDecimal = true;
        else if (!isdigit(literal[i]))
            return -1;
    }
    if (hasDecimal)
        return 3;
    else
        return 1;
}

static void printChar(double value)
{
    std::cout << "char: ";
    if (std::isnan(value) || std::isinf(value))
        std::cout << "impossible";
    else if (value < 0 || value > 127)
        std::cout << "impossible";
    else if (value < 32 || value == 127)
        std::cout << "Non displayable";
    else
        std::cout << "'" << static_cast<char>(value) << "'";
    std::cout << std::endl;
}

static void printInt(double value)
{
    std::cout << "int: ";
    if (std::isnan(value) || std::isinf(value))
        std::cout << "impossible";
    else if (value > INT_MAX || value < INT_MIN)
        std::cout << "impossible";
    else
        std::cout << static_cast<int>(value);
    std::cout << std::endl;
}

static void printFloat(double value)
{
    std::cout << "float: ";
    if (std::isnan(value))
        std::cout << "nanf";
    else if (std::isinf(value))
    {
        if (value > 0)
            std::cout << "+inff";
        else
            std::cout << "-inff";
    }
    else
    {
        float f = static_cast<float>(value);
        std::cout << std::fixed << std::setprecision(1) << f << "f";
    }
    std::cout << std::endl;
}

static void printDouble(double value)
{
    std::cout << "double: ";
    if (std::isnan(value))
        std::cout << "nan";
    else if (std::isinf(value))
    {
        if (value > 0)
            std::cout << "+inf";
        else
            std::cout << "-inf";
    }
    else
        std::cout << std::fixed << std::setprecision(1) << value;
    std::cout << std::endl;
}

void ScalarConverter::convert(const std::string& literal)
{           
    if (literal.empty())
    {
        std::cerr << "Error: Empty literal" << std::endl;
        return;
    }
    int type = getType(literal);
    double value = 0;

    switch (type)
    {
    case 0:
        value = static_cast<double>(literal[1]);
        break;
    case 1:
        {
            char* endptr;
            long tmp = std::strtol(literal.c_str(), &endptr, 10);
            if (*endptr != '\0' || errno == ERANGE)
            {
                std::cout << "Error: invalid literal" << std::endl;
                return;
            }
            value = static_cast<double>(tmp);
            }
        break;
    case 2:
        {
            char* endptr;
            value = std::strtod(literal.c_str(), &endptr);
            if (endptr == literal.c_str() || (*endptr != 'f' && *endptr != '\0'))
            {
                std::cout << "Error: invalid literal" << std::endl;
                return;
            }
        }
        break;
    case 3:
        {
            char* endptr;
            value = std::strtod(literal.c_str(), &endptr);
            if (endptr == literal.c_str())
            {
                std::cout << "Error: invalid literal" << std::endl;
                return;
            }
        }
        break;
    default:
        std::cout << "Error: invalid literal" << std::endl;
        return;
    }
    printChar(value);
    printInt(value);
    printFloat(value);
    printDouble(value);
}