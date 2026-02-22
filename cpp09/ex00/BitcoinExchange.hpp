/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 14:45:05 by igurses           #+#    #+#             */
/*   Updated: 2026/02/22 14:55:08 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <cstdlib>
#include <cctype>
#include <iomanip>


class BitcoinExchange
{
private:
	std::map<std::string, double> _exchangeRates;
	
	std::string findClosestDate(const std::string& date) const;
	bool isValidDate(const std::string& date) const;
	std::string trim(const std::string& str) const;
	bool parseLine(const std::string& line, std::string& date, std::string& valueStr) const;
	bool parseValue(const std::string& valueStr, double& value) const;
	
public:
	BitcoinExchange();
	BitcoinExchange(const std::string& filename);
	BitcoinExchange(const BitcoinExchange& other);
	BitcoinExchange& operator=(const BitcoinExchange& other);
	~BitcoinExchange();
	void loadExchangeRates(const std::string& filename);
	double getExchangeRate(const std::string& date) const;
	void processInputLine(const std::string& line) const;
};	




#endif