#include <iostream>
#include <vector>
#include "units.h"

//Definition der Literals
Kilometer operator "" _km(long double v);

Meter operator "" _m(long double v);

Decimeter operator "" _dm(long double v);

Centimeter operator "" _cm(long double v);

Millimeter operator "" _mm(long double v);

Micrometer operator "" _µm(long double v);

Nanometer operator "" _nm(long double v);




int main(){
	
	// //Variante 1:
	// Meter a(1.0);
	// Centimeter b(100);
	
	// std::cout<<a<<" plus "<<b <<" are: "<<a+b<<"\n";	
	
	// //Variante 2: Sehr cool wegen C++ Literals:
	
	auto v1=1_km;
	auto v2=10_m;
	auto v3=10_dm;
	auto v4=10_cm;
	auto v5=10_mm;
	auto v6=10000000_µm;
	auto v7=10000000_nm;
	// std::cout<<v2<<" plus "<<v1 <<" are: "<<v2+v1<<"\n";	


	// auto v1_2 = v1 + v2;
	// auto v2_1 = v2 + v1;

	// std::cout<< v1 << " plus " << v2 << " are: " << v1_2 << "\n";	
	// std::cout<< v2 << " plus " << v1 << " are: " << v2_1 << "\n\n";	

	// std::cout<< v2 << " plus " << v1_2 << " are: " << v2 + v1_2 << "\n";	
	// std::cout<< v1 << " plus " << v2_1 << " are: " << v1 + v2_1 << "\n\n";	

	// union LenghtUnits
	// {
	//     Kilometer km;
	//     Meter m;
	//     // Decimeter dm;
	//     // Centimeter cm;
	//     // Millimeter mm;
	//     // Micrometer µm;
	//     // Nanometer nm;
	// };

	// LenghtUnits lu;
	// lu.km = v1;
	// lu.m = v2;
	// lu.dm = v3;
	// lu.cm = v4;
	// lu.mm = v5;
	// lu.µm = v6;
	// lu.nm = v7;
	// std::vector<void*> length;
	// std::vector<void> km = {v1};
	// std::vector<void> m = {v2};
	// std::vector<void> dm = {v3};
	// std::vector<void> cm = {v4};
	// std::vector<void> mm = {v5};
	// std::vector<void> µm = {v6};
	// std::vector<void> nm = {v7};
	// std::vector<void> length;
	 // = {km, m, dm, cm, mm, µm, nm};
	// length.push_back(km);
	// std::vector<Unit> length = {v1,v2,v3,v4,v5,v6,v7};
	// length = {lu.km, lu.m, lu.dm, lu.cm, lu.mm, lu.µm, lu.nm}

	// auto ForEach = [](auto&&... args) {
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
					// std::cout<< (args, ...) << " plus " << (args, ...) << " are: " << (args, ...) + (args, ...) << "\n";
					// std::cout<< (args, ...) << " plus " << (args, ...) << " are: " << (args, ...) + (args, ...) << "\n";
					// std::cout<< length[i] << " plus " << length[j] << " are: " << length[i] + length[j] << "\n";
			
			}
		}
	// };
	// ForEach(v1,v2,v3,v4,v5,v6,v7);
	std::cout<< v1 << " plus " << v2 << " are: " << v1 + v2 << "\n";	
	std::cout<< v1 << " plus " << v3 << " are: " << v1 + v3 << "\n";	
	std::cout<< v1 << " plus " << v4 << " are: " << v1 + v4 << "\n";	
	std::cout<< v1 << " plus " << v5 << " are: " << v1 + v5 << "\n";	
	std::cout<< v1 << " plus " << v6 << " are: " << v1 + v6 << "\n";	
	std::cout<< v1 << " plus " << v7 << " are: " << v1 + v7 << "\n\n";	

	std::cout<< v2 << " plus " << v1 << " are: " << v2 + v1 << "\n";	
	std::cout<< v3 << " plus " << v1 << " are: " << v3 + v1 << "\n";	
	std::cout<< v4 << " plus " << v1 << " are: " << v4 + v1 << "\n";	
	std::cout<< v5 << " plus " << v1 << " are: " << v5 + v1 << "\n";	
	std::cout<< v6 << " plus " << v1 << " are: " << v6 + v1 << "\n";	
	std::cout<< v7 << " plus " << v1 << " are: " << v7 + v1 << "\n\n\n";	



	std::cout<< v1 << " minus " << v2 << " are: " << v1 - v2 << "\n";	
	std::cout<< v1 << " minus " << v3 << " are: " << v1 - v3 << "\n";	
	std::cout<< v1 << " minus " << v4 << " are: " << v1 - v4 << "\n";	
	std::cout<< v1 << " minus " << v5 << " are: " << v1 - v5 << "\n";	
	std::cout<< v1 << " minus " << v6 << " are: " << v1 - v6 << "\n";	
	std::cout<< v1 << " minus " << v7 << " are: " << v1 - v7 << "\n\n";	
	
	std::cout<< v2 << " minus " << v1 << " are: " << v2 - v1 << "\n";	
	std::cout<< v3 << " minus " << v1 << " are: " << v3 - v1 << "\n";	
	std::cout<< v4 << " minus " << v1 << " are: " << v4 - v1 << "\n";	
	std::cout<< v5 << " minus " << v1 << " are: " << v5 - v1 << "\n";	
	std::cout<< v6 << " minus " << v1 << " are: " << v6 - v1 << "\n";	
	std::cout<< v7 << " minus " << v1 << " are: " << v7 - v1 << "\n\n\n";	



	std::cout<< v1 << " mul " << v2 << " are: " << v1 * v2 << "\n";	
	std::cout<< v1 << " mul " << v3 << " are: " << v1 * v3 << "\n";	
	std::cout<< v1 << " mul " << v4 << " are: " << v1 * v4 << "\n";	
	std::cout<< v1 << " mul " << v5 << " are: " << v1 * v5 << "\n";	
	std::cout<< v1 << " mul " << v6 << " are: " << v1 * v6 << "\n";	
	std::cout<< v1 << " mul " << v7 << " are: " << v1 * v7 << "\n\n";	
	
	std::cout<< v2 << " mul " << v1 << " are: " << v2 * v1 << "\n";	
	std::cout<< v3 << " mul " << v1 << " are: " << v3 * v1 << "\n";	
	std::cout<< v4 << " mul " << v1 << " are: " << v4 * v1 << "\n";	
	std::cout<< v5 << " mul " << v1 << " are: " << v5 * v1 << "\n";	
	std::cout<< v6 << " mul " << v1 << " are: " << v6 * v1 << "\n";	
	std::cout<< v7 << " mul " << v1 << " are: " << v7 * v1 << "\n\n\n";	



	std::cout<< v1 << " div " << v2 << " are: " << v1 / v2 << "\n";	
	std::cout<< v1 << " div " << v3 << " are: " << v1 / v3 << "\n";	
	std::cout<< v1 << " div " << v4 << " are: " << v1 / v4 << "\n";	
	std::cout<< v1 << " div " << v5 << " are: " << v1 / v5 << "\n";	
	std::cout<< v1 << " div " << v6 << " are: " << v1 / v6 << "\n";	
	std::cout<< v1 << " div " << v7 << " are: " << v1 / v7 << "\n\n";	
	
	std::cout<< v2 << " div " << v1 << " are: " << v2 / v1 << "\n";	
	std::cout<< v3 << " div " << v1 << " are: " << v3 / v1 << "\n";	
	std::cout<< v4 << " div " << v1 << " are: " << v4 / v1 << "\n";	
	std::cout<< v5 << " div " << v1 << " are: " << v5 / v1 << "\n";	
	std::cout<< v6 << " div " << v1 << " are: " << v6 / v1 << "\n";	
	std::cout<< v7 << " div " << v1 << " are: " << v7 / v1 << "\n\n\n";	



}
