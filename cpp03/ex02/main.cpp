



#include "FragTrap.hpp"


int main()
{
	FragTrap ft1("FT-One");
	FragTrap ft2("FT-Two");

	ft1.attack("Target-A");
	ft2.takeDamage(20);
	ft2.beRepaired(10);
	ft1.highFivesGuys();

	return 0;
}