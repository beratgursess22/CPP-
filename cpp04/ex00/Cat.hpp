/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 12:54:09 by igurses           #+#    #+#             */
/*   Updated: 2025/11/19 11:41:22 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP


#include "Animal.hpp"


class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &other);
        Cat& operator=(const Cat& other);
        ~Cat();

        void setType(std::string);
        std::string getType() const;
        void makeSound() const;
};

#endif