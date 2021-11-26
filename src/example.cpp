#include <iostream>
#include <iomanip>
#include <string>
#include "cppunits.h"

auto calculate_density(cppunits::Gram mass, cppunits::CubicMeter volume){
	
	return cppunits::Kilogram(mass)/cppunits::CubicMeter(volume);
}

using namespace cppunits;

// alternatve single operator import
// using cppunits::operator"" _m;

void check_liter(Liter x)
{
	std::cout << "Your x is of unit liter!\n";
}

int main()
{
	auto v1 = 1_dm * 1_dm  * 1_dm;
	auto v2 = 1_dm * 1_dm²;
	
	check_liter(v1);
	check_liter(v2);

	std::cout << calculate_density(3.0_kg, 2_L) << "\n" ;

	return 0;

}
