

#include "DiamondTrap.hpp"


int main()
{
	DiamondTrap dt1("DiamondOne");
	dt1.whoAmI();
	dt1.attack("TargetA");

	DiamondTrap dt2 = dt1;
	dt2.whoAmI();
	dt2.attack("TargetB");

	DiamondTrap dt3;
	dt3 = dt1;
	dt3.whoAmI();
	dt3.attack("TargetC");

	return 0;
}