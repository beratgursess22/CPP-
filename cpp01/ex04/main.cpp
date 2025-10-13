/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:49:11 by igurses           #+#    #+#             */
/*   Updated: 2025/10/13 12:51:48 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Convert.hpp"

int main(int argc, char **argv)
{
    Convert conv;

    
    if (argc != 4)
    {
        std::cout << "Usage: ./convert <filename> <from> <to>" << std::endl;
        return (1);
    }
    else
    {
        
    }
    return (0);
}