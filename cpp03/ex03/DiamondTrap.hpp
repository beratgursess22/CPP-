
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP


#include "ClayTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>


class DiamondTrap :virtual public FragTrap, virtual public ScavTrap
{
	private:
		std::string name;
	public:
	    DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap &operator=(const DiamondTrap &other);
		~DiamondTrap();

		void whoAmI();
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};



#endif