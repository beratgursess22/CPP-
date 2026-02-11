/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 17:20:08 by igurses           #+#    #+#             */
/*   Updated: 2026/02/11 17:20:31 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

int main()
{
    std::srand(std::time(NULL));
    
    std::cout << "Generate random object" << std::endl;

    Base* obj = generate();
    std::cout << "\n--- identify(obj) (pointer) ---" << std::endl;
    identify(obj);

    std::cout << "\n--- identify(*obj) (reference) ---" << std::endl;
    identify(*obj);

    std::cout << "\n==============================" << std::endl;
    std::cout << "dynamic_cast pointer vs reference demo" << std::endl;

    std::cout << "\n[1] dynamic_cast<A*>(obj)" << std::endl;
    A* aPtr = dynamic_cast<A*>(obj);
    if (aPtr)
        std::cout << "dynamic_cast<A*>(obj) SUCCESS -> obj is A" << std::endl;
    else
        std::cout << "dynamic_cast<A*>(obj) FAILED -> obj is NOT A (NULL)" << std::endl;

    std::cout << "\n[2] dynamic_cast<A&>(*obj)" << std::endl;
    try
    {
        A& aRef = dynamic_cast<A&>(*obj);
        (void)aRef;
        std::cout << "dynamic_cast<A&>(*obj) SUCCESS -> obj is A" << std::endl;
    }
    catch (...)
    {
        std::cout << "dynamic_cast<A&>(*obj) FAILED -> exception thrown" << std::endl;
    }

    std::cout << "\n==============================" << std::endl;
    std::cout << "Test with specific types" << std::endl;

    std::cout << "\n--- Creating A ---" << std::endl;
    Base* a = new A();
    identify(a);
    identify(*a);
    delete a;

    std::cout << "\n--- Creating B ---" << std::endl;
    Base* b = new B();
    identify(b);
    identify(*b);
    delete b;

    std::cout << "\n--- Creating C ---" << std::endl;
    Base* c = new C();
    identify(c);
    identify(*c);
    delete c;

    delete obj;
    return 0;
}
