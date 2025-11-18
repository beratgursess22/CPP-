/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:37:05 by igurses           #+#    #+#             */
/*   Updated: 2025/11/18 20:42:52 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main()
{
    std::cout << "\n====== BASIC TESTS ======\n" << std::endl;

    const Animal* d = new Dog();
    const Animal* c = new Cat();
    std::cout << d->getType() << std::endl;
    std::cout << c->getType() << std::endl;
    d->makeSound(); 
    c->makeSound();
    delete d;
    delete c;

    std::cout << "\n====== ARRAY TEST ======\n" << std::endl;

    const int SIZE = 6;
    Animal* animals[SIZE];
    for (int i = 0; i < SIZE / 2; i++)
        animals[i] = new Dog();
    for (int i = SIZE / 2; i < SIZE; i++)
        animals[i] = new Cat();
    for (int i = 0; i < SIZE; i++)
        delete animals[i];

    std::cout << "\n====== DEEP COPY TEST (DOG) ======\n" << std::endl;

    Dog original;
    original.getBrain()->setIdea(0, "Food");
    original.getBrain()->setIdea(1, "Play");

    Dog copy = original;

    std::cout << "Original Brain address: " << original.getBrain() << std::endl;
    std::cout << "Copy Brain address:     " << copy.getBrain() << std::endl;

    std::cout << "Original idea[0]: " << original.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy idea[0]:     " << copy.getBrain()->getIdea(0) << std::endl;
    std::cout << "Original idea[1]: " << original.getBrain()->getIdea(1) << std::endl;
    std::cout << "Copy idea[1]:     " << copy.getBrain()->getIdea(1) << std::endl;
    copy.getBrain()->setIdea(0, "Sleep");
    std::cout << "\nAfter modifying copy's idea[0]: " << copy.getBrain()->getIdea(0) << std::endl;
    std::cout << "Original idea[0]: " << original.getBrain()->getIdea(0) << std::endl;
    original.getBrain()->setIdea(1, "Walk");
    std::cout << "After modifying original's idea[1]: " << original.getBrain()->getIdea(1) << std::endl;
    std::cout << "Copy idea[1]:  " << copy.getBrain()->getIdea(1) << std::endl;  

    copy = original;
    std::cout << "\nAfter assignment, Copy idea[0]: " << copy.getBrain()->getIdea(0) << std::endl;
    std::cout << "After assignment, Copy idea[1]: " << copy.getBrain()->getIdea(1) << std::endl;
    std::cout<< "orjinal idea[0]: " << original.getBrain()->getIdea(0) << std::endl;    
    std::cout<< "orjinal idea[1]: " << original.getBrain()->getIdea(1) << std::endl;
    std::cout << "\n====== WRONG ANIMAL TEST ======\n" << std::endl;

    const WrongAnimal* wa = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();

    std::cout << wa->getType() << std::endl;
    std::cout << wc->getType() << std::endl;

    wa->makeSound();
    wc->makeSound(); 

    delete wa;
    delete wc;
    std::cout << "\n====== END OF TESTS ======\n" << std::endl;
    return 0;
}