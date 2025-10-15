/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Write.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:51:32 by igurses           #+#    #+#             */
/*   Updated: 2025/10/15 13:53:13 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void writeFile(std::string content)
{
    std::ofstream file("result.txt");

    if (!file.is_open())
    {
        std::cout << "Error: Could not open output.txt for writing" << std::endl;
        return ;
    }
    file << content;
    file.close();
    std::cout << "File written to output.txt" << std::endl;
}
