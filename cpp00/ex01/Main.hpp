#ifndef MAIN_HPP
#define MAIN_HPP

#include "PhoneBook.hpp"
#include <cstdlib>

void takeInput(PhoneBook& phoneBook);
void controlSignal();
std::string getValidInput(const std::string& prompt);
bool safeGetline(const std::string& prompt, std::string& input);

#endif