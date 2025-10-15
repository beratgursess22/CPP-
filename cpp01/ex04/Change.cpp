/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Change.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:28:21 by igurses           #+#    #+#             */
/*   Updated: 2025/10/15 13:45:44 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void convert(std::string content, std::string from, std::string to)
{
    size_t pos;
    pos = 0;

    while ((pos = content.find(from, pos)) != std::string::npos)
    {
        content.erase(pos, from.length());
        content.insert(pos, to);
        pos += to.length();
    }
    writeFile(content);
}
