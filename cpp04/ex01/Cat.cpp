/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:39:03 by igurses           #+#    #+#             */
/*   Updated: 2025/11/18 20:23:17 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout<<"Cat's Constructor worked"<<std::endl;
    brain = new Brain();
}

Cat::Cat(const Cat &other)
{
    std::cout<<"Cat's Coppy Constructor worked"<<std::endl;
    this->type=other.type;
    brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat &other)
{   
    std::cout<<"Cat's Copy Assignment Operator worked"<<std::endl;
    if (this != &other)
    {
        delete brain;
        this->type = other.type;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Cat::~Cat()
{
    delete brain;
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