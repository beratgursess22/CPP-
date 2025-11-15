/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 12:43:53 by igurses           #+#    #+#             */
/*   Updated: 2025/11/15 16:45:21 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected: 
        std::string type;
    public:
        Animal();
        Animal(const Animal &other);
        Animal& operator=(const Animal &other);
        ~Animal();

        void setType(std::string type);
        std::string getType() const;
        virtual void makeSound() const;
};

#endif