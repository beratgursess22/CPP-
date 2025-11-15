/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:39:03 by igurses           #+#    #+#             */
/*   Updated: 2025/11/15 16:47:43 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout<<"Cat's Constructor worked"<<std::endl;
}

Cat::Cat(const Cat &other)
{
    std::cout<<"Cat's Coppy Constructor worked"<<std::endl;
    this->type=other.type;
}

Cat& Cat::operator=(const Cat &other)
{   
    if (this != &other)
        this->type = other.type;
    return *this;
}

Cat::~Cat()
{
    std::cout<<"Cat's Destructor Worked"<<std::endl; 
}

void Cat::makeSound() const
{
    std::cout<<"meovv"<<std::endl;
}

void Cat::setType(std::string type)
{
    this->type = type;
}

std::string Cat::getType() const
{
    return this->type;
}