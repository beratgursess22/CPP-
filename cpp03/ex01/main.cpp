/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:55:21 by igurses           #+#    #+#             */
/*   Updated: 2025/10/29 16:59:39 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Scavy");
    scav.attack("Target1");
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.guardGate();
    return 0;
}