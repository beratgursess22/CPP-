/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:50:54 by igurses           #+#    #+#             */
/*   Updated: 2026/02/07 20:34:01 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <cstdlib> 
#include <climits>   
#include <cerrno>   
#include <iomanip>    

class ScalarConverter
{
    private:
        ScalarConverter(); // çünkü bu sınıfın nesnesi oluşturulmayacak, sadece static fonksiyonları kullanılacak
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter& operator=(const ScalarConverter& other);
        ~ScalarConverter();     
    public:
        static void convert(const std::string& literal);   // static fonksiyon, nesne oluşturmadan çağrılabilir
 };
 
#endif 