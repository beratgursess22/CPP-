/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClayTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:39:12 by igurses           #+#    #+#             */
/*   Updated: 2025/10/29 17:00:00 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClayTrap.hpp"


ClayTrap::ClayTrap()
{
    std::cout<<"ClayTrap default constructor called"<<std::endl;
}


ClayTrap::ClayTrap(std::string name)
{
    std::cout<<"ClayTrap parameterized constructor called"<<std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClayTrap:: ClayTrap(const ClayTrap &other)
{
    std::cout<<"ClayTrap copy constructor called"<<std::endl;
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
}

ClayTrap& ClayTrap:: operator=(const ClayTrap &other)
{
    std::cout<<"ClayTrap assignment operator called"<<std::endl;
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoints = other.hitPoints;  
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}

ClayTrap::~ClayTrap()
{
    std::cout<<"ClayTrap destructor called"<<std::endl;
}



void ClayTrap:: attack(const std::string &target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        this->energyPoints--;
        std::cout<<"ClayTrap "<<this->name<<" attacks "<<target<<", causing "<<this->attackDamage<<" points of damage!"<<std::endl;
        std::cout <<"(Energy points left: "<<this->energyPoints<<")"<<std::endl;
    }
    else
        std::cout<<"ClayTrap "<<this->name<<" has no energy or hit points left to attack."<<std::endl;
}

void ClayTrap:: takeDamage(unsigned int amount)
{
    this->hitPoints -= amount;
    if (this->hitPoints < 0)
        this->hitPoints = 0;
    std::cout<<"ClayTrap "<<this->name<<" takes "<<amount<<" points of damage! Remaining hit points: "<<this->hitPoints<<std::endl;
}


void ClayTrap:: beRepaired(unsigned int amount)
{
    if (this->energyPoints > 0 || this->hitPoints > 0)
    {
        this->energyPoints--;
        this->hitPoints += amount;
        std::cout<<"ClayTrap "<<this->name<<" is repaired by "<<amount<<" points! Current hit points: "<<this->hitPoints<<std::endl;
        std::cout <<"(Energy points left: "<<this->energyPoints<<")"<<std::endl;
    }
    else
        std::cout<<"ClayTrap "<<this->name<<" has no energy or hit points left to repair."<<std::endl;
}