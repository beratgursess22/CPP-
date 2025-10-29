/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClayTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:39:00 by igurses           #+#    #+#             */
/*   Updated: 2025/10/29 17:47:42 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAYTRAP_HPP
#define CLAYTRAP_HPP


#include <iostream>
#include <string>

class ClayTrap
{
    protected:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    public:
        ClayTrap();
        ClayTrap(std::string name);
        ClayTrap(const ClayTrap &other);
        ClayTrap &operator=(const ClayTrap &other);
        ~ClayTrap();


        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif