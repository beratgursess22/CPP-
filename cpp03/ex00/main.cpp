/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:25:11 by igurses           #+#    #+#             */
/*   Updated: 2025/10/29 17:55:54 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClayTrap.hpp"


int main()
{
    ClayTrap ct1("Clayton");
    ClayTrap ct5;
    std:: cout << "------------------" << ct1.name <<std::endl;
    ct1.attack("Target1");
    ct1.takeDamage(5);
    ct1.beRepaired(3);
    std::cout << "------------------" << std::endl; 
    ClayTrap ct2(ct1); 
    ct2 = ct5;
    ct2.attack("Target2");
    ct2.takeDamage(2);
    ct2.beRepaired(4);
    std::cout << "------------------" << std::endl; 
    return 0;
}