/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:53:20 by igurses           #+#    #+#             */
/*   Updated: 2025/10/15 12:54:40 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(){}

Convert::~Convert(){}

void Convert::setFilename(std::string filename)
{
    this->filename = filename;
}

void Convert::setFrom(std::string from)
{
    this->from = from;
}

void Convert::setTo(std::string to)
{
    this->to = to;
}

std::string Convert::getFilename() const
{
    return (this->filename);
}

std::string Convert::getFrom() const
{
    return (this->from);
}

std::string Convert::getTo() const   
{
    return (this->to);
} 