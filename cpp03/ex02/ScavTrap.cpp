/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses < igurses@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:46:29 by igurses           #+#    #+#             */
/*   Updated: 2025/10/30 22:16:44 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
    std::cout<<"ScavTrap default constructor called"<<std::endl;
}
ScavTrap::ScavTrap(std::string name)
{
    std::cout<<"ScavTrap parameterized constructor called"<<std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    std::cout<<"ScavTrap copy constructor called"<<std::endl;
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
}

ScavTrap& ScavTrap:: operator=(const ScavTrap &other)
{
    std::cout<<"ScavTrap assignment operator called"<<std::endl;
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoints = other.hitPoints;  
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}


ScavTrap::~ScavTrap()
{
    std::cout<<"ScavTrap destructor called"<<std::endl;
}

void ScavTrap:: guardGate()
{
    std::cout<<"ScavTrap "<<this->name<<" is now in Gate keeper mode."<<std::endl;
}

void ScavTrap:: attack(const std::string &target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        this->energyPoints--;
        std::cout<<"ScavTrap "<<this->name<<" attacks "<<target<<", causing "<<this->attackDamage<<" points of damage!"<<std::endl;
    }
    else
    {
        std::cout<<"ScavTrap "<<this->name<<" has no energy or hit points left to attack."<<std::endl;
    }
}

void ScavTrap:: takeDamage(unsigned int amount)
{
    this->hitPoints -= amount;
    if (this->hitPoints < 0)
        this->hitPoints = 0;
    std::cout<<"ScavTrap "<<this->name<<" takes "<<amount<<" points of damage! (Hit points left: "<<this->hitPoints<<")"<<std::endl;
}

void ScavTrap:: beRepaired(unsigned int amount)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        this->hitPoints += amount;
        this->energyPoints--;
        std::cout<<"ScavTrap "<<this->name<<" is repaired by "<<amount<<" points! (Hit points: "<<this->hitPoints<<", Energy points left: "<<this->energyPoints<<")"<<std::endl;
    }
    else
        std::cout<<"ScavTrap "<<this->name<<" has no energy or hit points left to repair."<<std::endl;
}