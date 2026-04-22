#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <algorithm>
# include <ctime>
# include <deque>
# include <iostream>
# include <sstream>
# include <stdexcept>
# include <vector>
#include <iostream>

class PmergeMe
{
  private:
	std::vector<int> vec;
	std::deque<int> deq;

	PmergeMe();
	static bool isPositiveInteger(const std::string& s);
	void parseInput(char** av);
	void fordJohnsonVector(std::vector<int>& data);
	void fordJohnsonDeque(std::deque<int>& data);
	static void printBefore(const std::vector<int>& data);
	static void printAfter(const std::vector<int>& data);
	static double elapsedUs(std::clock_t start, std::clock_t end);

  public:
	PmergeMe();
	PmergeMe(const PmergeMe &other);
	PmergeMe &operator=(const PmergeMe &other);
	~PmergeMe();
	void execute();
}

#endif