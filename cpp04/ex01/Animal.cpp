/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 12:56:37 by igurses           #+#    #+#             */
/*   Updated: 2025/11/19 12:17:44 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal()
{
    std::cout<<"Animal's Constructor worked"<<std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout<<"Animal's Coppy Constructor worked"<<std::endl;
    this->type=other.type;
}

Animal& Animal::operator=(const Animal &other)
{
    std::cout<<"Animal's Asissgment Constructor worked"<<std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

Animal::~Animal()
{
    std::cout<<"Animal's Destructor Worked"<<std::endl; 
}

void Animal::setType(std::string type)
{
    this->type = type;
}
std::string Animal::getType() const
{
    return this->type;
}   

void Animal::makeSound() const
{
    std::cout<<"Animal Sound"<<std::endl;
}