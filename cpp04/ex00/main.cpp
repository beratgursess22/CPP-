/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:37:05 by igurses           #+#    #+#             */
/*   Updated: 2025/11/19 12:08:47 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    std::cout << "---------------------" << std::endl;
    const Animal* j = new Dog();
    std::cout << "---------------------" << std::endl;
    const Animal* i = new Cat();
    std::cout << "---------------------" << std::endl;
    const Animal a =  Cat();
    std::cout << "---------------------" << std::endl;
    const Animal b = Animal();
    std::cout << "---------------------" << std::endl;  
    std::cout << "------Animal Test-----" << std::endl;
    std::cout << "---------------------" << std::endl;
    std::cout <<"Dog Adrress: "<< &j << " "<< j->getType()<< std::endl;
    std::cout <<"Cat Adress : "<< &i << " "<< i->getType() << std::endl;
    std::cout <<"Animal Adrress : "<< &meta << " "<< meta->getType() << std::endl;
    std::cout << "Animal A Type : " <<&a << " " <<a.getType() << std::endl;
    a.makeSound();
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    std::cout << "---------------------" << std::endl;
    std::cout << "-----Wrong Animal-----" << std::endl;
    std::cout << "---------------------" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongI = new WrongCat();
    std::cout << wrongI->getType() << " " << std::endl;
    wrongI->makeSound();
    wrongMeta->makeSound();
    delete wrongMeta;
    delete wrongI;
    std::cout << "---------------------" << std::endl;
    std::cout << "---------------------" << std::endl;
    std::cout << "---------------------" << std::endl;



    return 0;
}