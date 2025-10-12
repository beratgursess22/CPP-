/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 13:42:42 by igurses           #+#    #+#             */
/*   Updated: 2025/10/12 15:52:14 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* zombie1 = new Zombie("Zombie1");
    zombie1->announce();
    randomChump("Zombie2");
    delete zombie1;
    return 0;
}