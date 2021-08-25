#include <iostream>
#include <iomanip>
#include <string>
#include "cppunits.h"

template<typename T>
void test_square_meter_input(cppunits::AggregateUnits<T, 2, 0, 0, 0, 0, 0, 0> a ){
	std::cout<<"square meter input active\n";
	
}

int main(){
	
	auto v1=3.0_m;
	auto v2=2_s;
	std::cout << v1 / v2;

	auto Pa = 1.0_Pa;
	auto s = 1_s;
	auto kg = 1_kg;
	auto m = 1_m;
	auto s² = s * s;


	auto a = cppunits::Kilogram(1000_g);
	std::cout << cppunits::Gram(a);
	
//	test_square_meter_input(v1*v1); //function call does only compile if input is in square meters
}
