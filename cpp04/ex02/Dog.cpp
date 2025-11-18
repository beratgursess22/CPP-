/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:42:00 by igurses           #+#    #+#             */
/*   Updated: 2025/11/18 20:27:09 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout<<"Dog's Constructor worked"<<std::endl;
    brain = new Brain();
}

Dog::Dog(const Dog &dog)
{
    std::cout<<"Dog's Coppy Constructor worked"<<std::endl;
    this->type=dog.type;
    brain = new Brain(*dog.brain);
}

Dog& Dog::operator=(const Dog &other)
{   
    std::cout<<"Dog's Copy Assignment Operator worked"<<std::endl;
    if (this != &other)
    {
        delete brain;
        this->type = other.type;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Dog::~Dog()
{
    delete brain;
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

Brain* Dog::getBrain() const
{
    return this->brain;
}
