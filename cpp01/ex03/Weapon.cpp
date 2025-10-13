/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:44:02 by igurses           #+#    #+#             */
/*   Updated: 2025/10/13 12:28:02 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) 
{
    this->type = type;
}

Weapon::~Weapon() {}

void Weapon::setType(std::string type) 
{
    this->type = type;
}

const std::string &Weapon::getType() const 
{
    return this->type;
}