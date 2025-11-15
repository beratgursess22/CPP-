/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:42:00 by igurses           #+#    #+#             */
/*   Updated: 2025/11/15 16:46:59 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout<<"Dog's Constructor worked"<<std::endl;
}

Dog::Dog(const Dog &dog)
{
    std::cout<<"Dog's Coppy Constructor worked"<<std::endl;
    this->type=dog.type;
}

Dog& Dog::operator=(const Dog &other)
{   
    if (this != &other)
        this->type = other.type;
    return *this;
}

Dog::~Dog()
{
    std::cout<<"Dog's Destructor Worked"<<std::endl; 
}

void Dog::makeSound() const
{
    std::cout<<"bark bark"<<std::endl;
}

void Dog::setType(std::string type)
{
    this->type = type;
}
std::string Dog::getType() const
{
    return this->type;
}
