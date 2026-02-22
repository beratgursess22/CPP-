/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:28:57 by igurses           #+#    #+#             */
/*   Updated: 2026/02/22 15:31:08 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP


#include <iostream>
#include <stack>
#include <sstream>
#include <stdexcept>
#include <string>

class RPN
{
private:
	std::stack<int> _stack;
	bool isOperator(const std::string& token) const;
	bool isNumber(const std::string& token) const;
	int applyOperator(const std::string& op, int a, int b) const;
public:
	RPN();
	RPN(const std::string &expression);
	RPN(const RPN& other);
	RPN& operator=(const RPN& other);
	~RPN();
	int calcuation(const std::string &expression);
};


#endif