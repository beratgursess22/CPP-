/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 13:46:08 by igurses           #+#    #+#             */
/*   Updated: 2025/10/12 15:53:13 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie()
{
    this->name = "Default";
}


Zombie::~Zombie()
{
    std::cout << this->name << " is destroyed." << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}
void Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}