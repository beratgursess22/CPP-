/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:37:05 by igurses           #+#    #+#             */
/*   Updated: 2025/11/19 13:16:30 by igurses          ###   ########.fr       */
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
    std::cout <<"------------------------" <<std::endl;
    std::cout<<"Dog adress: "<< &d <<" "<<d->getType() << std::endl;
    std::cout<<"Cat adress: " << &c << " " <<c->getType() << std::endl;
    std::cout <<"------------------------" <<std::endl;
    d->makeSound(); 
    c->makeSound();
    std::cout <<"------------------------" <<std::endl;
    delete d;
    delete c;

    std::cout << "\n====== ARRAY TEST ======\n" << std::endl;

    const int SIZE = 6;
    Animal* animals[SIZE];
    std::cout <<"----------DOG------------" <<std::endl;
    for (int i = 0; i < SIZE / 2; i++)
        animals[i] = new Dog();
    std::cout <<"-----------CAT-----------" <<std::endl;
    for (int i = SIZE / 2; i < SIZE; i++)
        animals[i] = new Cat();
    std::cout <<"------------------------" <<std::endl;
    for(int i = 0; i < SIZE; i++)
    {
        std::cout << "Animal " << i << " address: " << &animals[i] << " " << "type: " << animals[i]->getType()<< std::endl;
        animals[i]->makeSound();
    }
    std::cout <<"----------DELETE-----------" <<std::endl;
    for (int i = 0; i < SIZE; i++)
        delete animals[i];
    std::cout << "\n====== DEEP COPY TEST (DOG) ======\n" << std::endl;

    Dog original;
    std::cout <<"------------------------" <<std::endl;
    std::cout << "Original Brain address: " << original.getBrain() << std::endl;
    std::cout <<"------------------------" <<std::endl;
    original.getBrain()->setIdea(0, "Food");
    original.getBrain()->setIdea(1, "Play");
    std::cout <<"------------------------" <<std::endl;
    Dog copy;
    std::cout <<"------------------------" <<std::endl;
    std::cout << "Copy Brain address:     " << copy.getBrain() << std::endl;
    std::cout <<"------------------------" <<std::endl;
    copy = original;
    std::cout <<"------------------------" <<std::endl;
    std::cout << "After Copy Construction:" << std::endl;
    std::cout << "Original Brain address: " << original.getBrain() << std::endl;
    std::cout << "Copy Brain address:     " << copy.getBrain() << std::endl;
    std::cout <<"------------------------" <<std::endl;
    std::cout << "Original idea[0]: " << original.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy idea[0]:     " << copy.getBrain()->getIdea(0) << std::endl;
    std::cout << "Original idea[1]: " << original.getBrain()->getIdea(1) << std::endl;
    std::cout << "Copy idea[1]:     " << copy.getBrain()->getIdea(1) << std::endl;
    std::cout <<"------------------------" <<std::endl;
    copy.getBrain()->setIdea(0, "Sleep");
    std::cout <<"------------------------" <<std::endl;
    std::cout << "After modifying copy's idea[0]: " << copy.getBrain()->getIdea(0) << std::endl;
    std::cout << "Original idea[0]: " << original.getBrain()->getIdea(0) << std::endl;
    original.getBrain()->setIdea(1, "Walk");
    std::cout << "After modifying original's idea[1]: " << original.getBrain()->getIdea(1) << std::endl;
    std::cout << "Copy idea[1]:  " << copy.getBrain()->getIdea(1) << std::endl;  
    std::cout <<"------------------------" <<std::endl;
    std::cout <<"------------------------" <<std::endl;
    copy = original;
    std::cout << "\nAfter assignment, Copy idea[0]: " << copy.getBrain()->getIdea(0) << std::endl;
    std::cout << "After assignment, Copy idea[1]: " << copy.getBrain()->getIdea(1) << std::endl;
    std::cout<< "orjinal idea[0]: " << original.getBrain()->getIdea(0) << std::endl;    
    std::cout<< "orjinal idea[1]: " << original.getBrain()->getIdea(1) << std::endl;
    std::cout << "\n====== WRONG ANIMAL TEST ======\n" << std::endl;
    std::cout <<"------------------------" <<std::endl;
    std::cout <<"------------------------" <<std::endl;

    const WrongAnimal* wa = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();
    std::cout <<"------------------------" <<std::endl;
    std::cout <<"------------------------" <<std::endl;

    std::cout << wa->getType() << std::endl;
    std::cout << wc->getType() << std::endl;
    std::cout <<"------------------------" <<std::endl;
    std::cout <<"------------------------" <<std::endl;

    wa->makeSound();
    wc->makeSound(); 
    std::cout <<"------------------------" <<std::endl;
    std::cout <<"------------------------" <<std::endl;

    delete wa;
    delete wc;

    std::cout << "\n====== END OF TESTS ======\n" << std::endl;
    return 0;
}