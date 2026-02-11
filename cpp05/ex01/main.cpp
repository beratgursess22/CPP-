/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:14:55 by igurses           #+#    #+#             */
/*   Updated: 2026/02/11 13:41:16 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{
    std::cout << "=== Test 1: Successful signing ==="  << std::endl;
    try {
        Form formA("Tax Form", 50, 30);
        Bureaucrat alice("İbrahim", 40);
        std::cout << alice;
        std::cout << formA;
        alice.signForm(formA);
        alice.signForm(formA);
        std::cout << formA;
    }
    catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 2: Failed signing (grade too low) ===" << std::endl;
    try {
        Form formB("Important Document", 25, 10);
        Bureaucrat bob("Berat", 50);
        std::cout << bob;
        std::cout << formB;
        bob.signForm(formB);
        std::cout << formB;
    }
    catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 3: Form with invalid grades ===" << std::endl;
    try {
        Form invalidForm("Invalid Form", 0, 50);
    }
    catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 4: Multiple signings ===" << std::endl;
    try {
        Form formC("Contract", 100, 50);
        Bureaucrat charlie("Gurses", 90);
        std::cout << formC;
        charlie.signForm(formC);
        std::cout << formC;
        charlie.signForm(formC);
    }
    catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}