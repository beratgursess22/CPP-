/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 15:56:32 by igurses           #+#    #+#             */
/*   Updated: 2026/02/16 16:10:00 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"

int main()
{
    std::cout << ". TEST 1: Subject Example (MutantStack) ." << std::endl;
    {
        MutantStack<int> mstack;
        
        mstack.push(5);
        mstack.push(17);
        
        std::cout << "Top: " << mstack.top() << std::endl; 
        
        mstack.pop();
        
        std::cout << "Size: " << mstack.size() << std::endl;  
        
        mstack.push(3);
        mstack.push(4);
        mstack.push(737);
        mstack.push(0);
        
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        

		std::cout<< "it :" << *it << std::endl;
		std::cout<< "ite :" << *ite << std::endl;
        ++it;
		std::cout<< "it after increment and decrement :" << *it << std::endl;
        --it;
        std::cout << "it after decrement :" << *it << std::endl;
		
        std::cout << "Stack contents:" << std::endl;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        
        std::stack<int> s(mstack);
        std::cout << "Converted to std::stack size: " << s.size() << std::endl;
    }
    
    
    
    std::cout <<std::endl <<". TEST 2: String MutantStack ." << std::endl;
    {
        MutantStack<std::string> mstack;
        mstack.push("Hello");
        mstack.push("World");
        mstack.push("!");
        
        std::cout << "String stack:" << std::endl;
        for (MutantStack<std::string>::iterator it = mstack.begin(); it != mstack.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;
    }
    
    std::cout <<std::endl<<". TEST 3: Reverse Iterator ." << std::endl;
    {
        MutantStack<int> mstack;
        for (int i = 1; i <= 5; i++)
            mstack.push(i);
        
        std::cout << "Normal order: ";
        for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;
        
        std::cout << "Reverse order: ";
        for (MutantStack<int>::reverse_iterator it = mstack.rbegin(); it != mstack.rend(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;
    }
    return 0;
}