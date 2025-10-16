/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses < igurses@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:41:31 by igurses           #+#    #+#             */
/*   Updated: 2025/10/16 22:39:21 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main (int argc, char **argv)
{
	Harl harl; 
	
	if (argc !=2)
	{
		std::cerr << "Usage:  <level> [DEBUG], [INFO], [WARNING], [ERROR]" << std::endl;
		return 1;
	}
	harl.complain(argv[1]);
	return 0;
}