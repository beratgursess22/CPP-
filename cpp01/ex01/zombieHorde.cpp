/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 15:39:05 by igurses           #+#    #+#             */
/*   Updated: 2025/10/12 15:49:10 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int  N, std::string name)
{
    int i = 0;
    if (N <= 0)
        return NULL;
    Zombie* horde = new Zombie[N];
    while (i < N)
    {
        horde[i].setName(name);
        i++;
    }
    for (i = 0; i < N; i++)
        horde[i].announce();
    return horde;
}