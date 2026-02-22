/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 14:48:42 by igurses           #+#    #+#             */
/*   Updated: 2026/02/22 15:16:02 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const std::string& filename) 
{
	loadExchangeRates(filename);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) 
{
	_exchangeRates = other._exchangeRates;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) 
{
	if (this != &other)
		_exchangeRates = other._exchangeRates;

	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::loadExchangeRates(const std::string& filename) 
{
	std::ifstream file(filename);
	if (!file.is_open()) 
	{
		std::cerr << "Error: Could not open file " << filename << std::endl;
		return;
	}

	std::string line;
	std::getline(file, line);
	while (std::getline(file, line)) 
	{
		size_t commaPos = line.find(',');
		if (commaPos == std::string::npos)
			continue;
		
		std::string date = line.substr(0, commaPos);
		std::string rateStr = line.substr(commaPos + 1);
		char* end;
		double rate = std::strtod(rateStr.c_str(), &end);

		if (*end != '\0' && *end != '\n' && *end != '\r')
			continue;			
		if (isValidDate(date))
			_exchangeRates[date] = rate;
	}
	file.close();
}

bool BitcoinExchange::isValidDate(const std::string& date) const
{
	if (date.length() != 10)
		return false;
	if (date[4] != '-' || date[7] != '-')
		return false;
	for (size_t i = 0; i < date.length(); i++)
	{
		if (i == 4 || i == 7)
			continue;
		if (!isdigit(date[i]))
			return false;
	}

	int year = atoi(date.substr(0, 4).c_str());
	int month = atoi(date.substr(5, 2).c_str());
	int day = atoi(date.substr(8, 2).c_str());
	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	
	return true;
}

std::string BitcoinExchange::findClosestDate(const std::string& date) const
{
	if (_exchangeRates.find(date) != _exchangeRates.end())
		return date;
	std::map<std::string, double>::const_iterator it = _exchangeRates.lower_bound(date);
	if (it == _exchangeRates.begin())
		return "";
	--it;
	return it->first;
}

double BitcoinExchange::getExchangeRate(const std::string& date) const
{
	std::string closestDate = findClosestDate(date);
	
	if (closestDate.empty())
		return -1.0; 
	
	return _exchangeRates.find(closestDate)->second;
}

std::string BitcoinExchange::trim(const std::string& str) const
{
	size_t first = str.find_first_not_of(" \t\n\r");
	if (first == std::string::npos)
		return "";
	size_t last = str.find_last_not_of(" \t\n\r");
	return str.substr(first, last - first + 1);
}

bool BitcoinExchange::parseLine(const std::string& line, std::string& date, std::string& valueStr) const
{
	size_t pipePos = line.find('|');
	if (pipePos == std::string::npos)
		return false;
	date = trim(line.substr(0, pipePos));
	valueStr = trim(line.substr(pipePos + 1));
	
	return !date.empty() && !valueStr.empty();
}

bool BitcoinExchange::parseValue(const std::string& valueStr, double& value) const
{
	char* end;
	value = std::strtod(valueStr.c_str(), &end);
	
	if (*end != '\0' && *end != '\n' && *end != '\r')
		return false;
	
	return true;
}

void BitcoinExchange::processInputLine(const std::string& line) const
{
	if (trim(line).empty())
		return;
	
	std::string date, valueStr;
	
	if (!parseLine(line, date, valueStr))
	{
		std::cerr << "Error: bad input => " << line << std::endl;
		return;
	}
	
	if (!isValidDate(date))
	{
		std::cerr << "Error: bad input => " << line << std::endl;
		return;
	}
	
	double value;
	if (!parseValue(valueStr, value))
	{
		std::cerr << "Error: bad input => " << line << std::endl;
		return;
	}
	
	if (value < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return;
	}
	
	if (value > 1000)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return;
	}
	
	double rate = getExchangeRate(date);
	if (rate < 0)
	{
		std::cerr << "Error: no exchange rate available for date => " << date << std::endl;
		return;
	}
	
	double result = value * rate;
	std::cout << date << " => " << value << " = " << result << std::endl;
}