




#include "FragTrap.hpp"


FragTrap::FragTrap()
{
	std::cout<<"FragTrap default constructor called"<<std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << this->name << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " is requesting high fives!" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->energyPoints--;
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		std::cout << "FragTrap " << this->name << " has " << this->energyPoints << " energy points left." << std::endl;
	}
	else
		std::cout << "FragTrap " << this->name << " has no energy points or hit points left to attack!" << std::endl;
}


void FragTrap:: takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
	if (this->hitPoints < 0)
		this->hitPoints = 0;
	std::cout << "FragTrap " << this->name << " takes " << amount << " points of damage! Remaining hit points: " << this->hitPoints << std::endl;
}

void FragTrap:: beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->hitPoints += amount;
		this->energyPoints--;
		std::cout << "FragTrap " << this->name << " is repaired by " << amount << " points! Current hit points: " << this->hitPoints << std::endl;
		std::cout << "FragTrap " << this->name << " has " << this->energyPoints << " energy points left." << std::endl;
	}
	else
		std::cout << "FragTrap " << this->name << " has no energy points or hit points left to repair!" << std::endl;
}