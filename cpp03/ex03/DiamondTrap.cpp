


#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}


DiamondTrap::DiamondTrap(std::string name)
{
	this->name = name;
	this->ClayTrap::name = name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap parameterized constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->name = other.name;
	this->ClayTrap::name = other.ClayTrap::name;
	this->hitPoints = other.FragTrap::hitPoints;
	this->energyPoints = other.ScavTrap::energyPoints;
	this->attackDamage = other.FragTrap::attackDamage;
}


DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap assignment operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->ClayTrap::name = other.ClayTrap::name;
		this->hitPoints = other.FragTrap::hitPoints;
		this->energyPoints = other.ScavTrap::energyPoints;
		this->attackDamage = other.FragTrap::attackDamage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}


void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->name << ", ClapTrap name: " << this->ClayTrap::name << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
void DiamondTrap::takeDamage(unsigned int amount)
{
	ClayTrap::takeDamage(amount);
}
void DiamondTrap::beRepaired(unsigned int amount)
{
	ClayTrap::beRepaired(amount);
}

