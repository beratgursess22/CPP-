/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 15:31:14 by igurses           #+#    #+#             */
/*   Updated: 2026/02/22 15:44:52 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const std::string &expression) 
{
	calcuation(expression);
}

RPN::RPN(const RPN& other) 
{
	_stack = other._stack;
}

RPN& RPN::operator=(const RPN& other) 
{
	if (this != &other)
		_stack = other._stack;
	return *this;
}

RPN::~RPN(){}


bool RPN::isOperator(const std::string& token) const
{
	return token == "+" || token == "-" || token == "*" || token == "/";
}
	
bool RPN::isNumber(const std::string& token) const
{
	return token.length() == 1 && std::isdigit(token[0]);
}

int RPN::applyOperator(const std::string& op, int a, int b) const
{
	if (op == "+")
		return a + b;
	else if (op == "-")
		return a - b;
	else if (op == "*")
		return a * b;
	else if (op == "/")
	{
		if (b == 0)
			throw std::runtime_error("Error: division by zero");
		return a / b;
	}
	throw std::runtime_error("Error: unknown operator");
}


int RPN::calcuation(const std::string &expression)
{
	std::istringstream iss(expression);
	std::string token;
	while (iss >> token)
	{
		if (isNumber(token))
			_stack.push(std::atoi(token.c_str()));
		else if (isOperator(token))
		{
			if (_stack.size() < 2)
				throw std::runtime_error("Error: not enough operands");
			int b = _stack.top(); _stack.pop();
			int a = _stack.top(); _stack.pop();
			int result = applyOperator(token, a, b);
			_stack.push(result);
		}
		else
			throw std::runtime_error("Error: invalid token");
	}
	if (_stack.size() != 1)
		throw std::runtime_error("Error: too many operands");
	return _stack.top();
}
