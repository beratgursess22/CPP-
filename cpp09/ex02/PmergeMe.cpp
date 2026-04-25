/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:05:15 by igurses           #+#    #+#             */
/*   Updated: 2026/04/22 17:10:43 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(char **argv)
{
	parseInput(argv);
}
PmergeMe::PmergeMe(const PmergeMe &other)
{
	*this = other;
	vec = other.vec;
	deq = other.deq;
}
PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other)
	{
		vec = other.vec;
		deq = other.deq;
	}
	return (*this);
}
PmergeMe::~PmergeMe()
{
}

void PmergeMe::parseInput(char **argv)
{
	int	number;

	for (int i = 0; argv[i] != NULL; i++)
	{
		std::string arg(argv[i]);
		if (!isPositiveInteger(arg))
			throw std::runtime_error("Error");
		number = std::atoi(arg.c_str());
		vec.push_back(number);
		deq.push_back(number);
	}
	if (vec.empty() || deq.empty())
		throw std::runtime_error("Error: No valid input provided.");
}

bool PmergeMe::isPositiveInteger(const std::string &s)
{
	char	*end;
	long	v;

	if (s.empty())
		return (false);
	for (std::size_t i = 0; i < s.length(); i++)
	{
		if (!std::isdigit(static_cast<unsigned char>(s[i])))
			return (false);
	}
	end = NULL;
	v = std::strtol(s.c_str(), &end, 10);
	if (*end != '\0')
		return (false);
	if (v <= 0 || v > INT_MAX)
		return (false);
	return (true);
}
void PmergeMe::printBefore(const std::vector<int> &data)
{
	std::cout << "Before: ";
	for (size_t i = 0; i < data.size(); i++)
	{
		std::cout << data[i];
		if (i != data.size() - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::printAfter(const std::vector<int> &data)
{
	std::cout << "After: ";
	for (size_t i = 0; i < data.size(); i++)
	{
		std::cout << data[i];
		if (i != data.size() - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
}

double PmergeMe::elapsedUs(std::clock_t start, std::clock_t end)
{
	const double	ticks = static_cast<double>(end - start);

	return ((ticks / static_cast<double>(CLOCKS_PER_SEC)) * 1000000.0);
}

void PmergeMe::execute()
{
	double	vecTime;
	double	deqTime;

	std::clock_t start, end;
	printBefore(vec);
	start = std::clock();
	fordJohnsonVector(vec);
	end = std::clock();
	vecTime = elapsedUs(start, end);
	start = std::clock();
	fordJohnsonDeque(deq);
	end = std::clock();
	deqTime = elapsedUs(start, end);
	printAfter(vec);
	std::cout << std::fixed << std::setprecision(6);
	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << vecTime << " us\n";
	std::cout << "Time to process a range of " << deq.size() << " elements with std::deque : " << deqTime << " us\n";
}

void PmergeMe::fordJohnsonVector(std::vector<int> &data)
{
	bool	hasOdd;
	int		oddValue;
	int		a;
	int		b;

	if (data.size() <= 1)
		return ;
	std::vector<int> smaller;
	std::vector<int> bigger;
	smaller.reserve(data.size() / 2);
	bigger.reserve((data.size() + 1) / 2);
	hasOdd = (data.size() % 2) != 0;
	oddValue = 0;
	for (std::size_t i = 0; i + 1 < data.size(); i += 2)
	{
		a = data[i];
		b = data[i + 1];
		if (a < b)
		{
			smaller.push_back(a);
			bigger.push_back(b);
		}
		else
		{
			smaller.push_back(b);
			bigger.push_back(a);
		}
	}
	if (hasOdd)
		oddValue = data.back();
	fordJohnsonVector(bigger);
	std::vector<int> merged = bigger;
	if (!smaller.empty())
	{
		merged.insert(std::lower_bound(merged.begin(), merged.end(),
				smaller[0]), smaller[0]);
		for (std::size_t i = 1; i < smaller.size(); ++i)
			merged.insert(std::lower_bound(merged.begin(), merged.end(),
					smaller[i]), smaller[i]);
	}
	if (hasOdd)
		merged.insert(std::lower_bound(merged.begin(), merged.end(), oddValue),
			oddValue);
	data.swap(merged);
}

void PmergeMe::fordJohnsonDeque(std::deque<int> &data)
{
	bool	hasOdd;
	int		oddValue;
	int		a;
	int		b;

	if (data.size() <= 1)
		return ;
	std::deque<int> smaller;
	std::deque<int> bigger;
	hasOdd = (data.size() % 2 != 0);
	oddValue = 0;
	for (std::size_t i = 0; i + 1 < data.size(); i += 2)
	{
		a = data[i];
		b = data[i + 1];
		if (a < b)
		{
			smaller.push_back(a);
			bigger.push_back(b);
		}
		else
		{
			smaller.push_back(b);
			bigger.push_back(a);
		}
	}
	if (hasOdd)
		oddValue = data[data.size() - 1];
	fordJohnsonDeque(bigger);
	std::deque<int> mainChain = bigger;
	if (!smaller.empty())
	{
		mainChain.insert(std::lower_bound(mainChain.begin(), mainChain.end(),
				smaller[0]), smaller[0]);
		for (std::size_t i = 1; i < smaller.size(); ++i)
			mainChain.insert(std::lower_bound(mainChain.begin(),
					mainChain.end(), smaller[i]), smaller[i]);
	}
	if (hasOdd)
		mainChain.insert(std::lower_bound(mainChain.begin(), mainChain.end(),
				oddValue), oddValue);
	data.swap(mainChain);
}
