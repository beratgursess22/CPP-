/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Read.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:50:11 by igurses           #+#    #+#             */
/*   Updated: 2025/10/15 13:34:39 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void readFile(Convert& conv)
{
    std::ifstream file(conv.getFilename().c_str());
    std::string content;
    std::string line;

    if (!file.is_open())
    {
        std::cout << "Error: Could not open file " << conv.getFilename() << std::endl;
        return ;
    }
    while (std::getline(file, line))
        content += line + "\n";
    file.close();
    if (content.empty())
    {
        std::cout << "Error: File " << conv.getFilename() << " is empty" << std::endl;
        return ;
    }
    if (conv.getFrom().empty() || conv.getTo().empty())
    {
        std::cout << "Error: 'from' and 'to' strings must not be empty" << std::endl;
        return ;
    }
    convert(content,conv.getFrom(), conv.getTo());
}