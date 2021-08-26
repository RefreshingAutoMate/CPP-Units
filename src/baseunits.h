#pragma once
#include <ostream>
#include <cmath>
#include <string>
// Subset of important units: Length (Meter), Mass (Gram (not Kilogram!)), Time (Second), Temperature (Kelvin), Current(Ampere), Substance (Mol), Candela
// see:https://de.wikipedia.org/wiki/Internationales_Einheitensystem#SI-Einheiten

namespace cppunits{
	
	template<int N>
	class UnitPrefix{
		public:
		UnitPrefix() =delete;
		static double in_base_unit(double v){ 
			return v*std::pow(10, N);
		}
		static double from_base(double v){ 
			return v/std::pow(10, N);
		}				
	};
	
    using Yotta=UnitPrefix<24>; 
    using Zetta=UnitPrefix<21>; 
    using Exa=UnitPrefix<18>;   
    using Peta=UnitPrefix<15>;  
    using Tera=UnitPrefix<12>;  
    using Giga=UnitPrefix<9>;   
    using Mega=UnitPrefix<6>;   
    using Kilo=UnitPrefix<3>;   
    using Hecto=UnitPrefix<2>;  
    using Deca=UnitPrefix<1>;   
    using Base=UnitPrefix<0>;   
    using Deci = UnitPrefix<-1>;
    using Centi=UnitPrefix<-2>;
    using Milli=UnitPrefix<-3>;
    using Micro=UnitPrefix<-6>;
    using Nano=UnitPrefix<-9>;
    using Pico=UnitPrefix<-12>;
    using Femto=UnitPrefix<-15>;
    using Atto=UnitPrefix<-18>;
    using Zepto=UnitPrefix<-21>;
    using Yocto=UnitPrefix<-24>;

	template<typename T, int N1, int N2, int N3, int N4, int N5, int N6, int N7>
	class AggregateUnits{
		public:
		double val;
		
		template<class G>
		AggregateUnits(AggregateUnits<G,N1,N2,N3,N4,N5,N6,N7> other_unit){
			double temp=G::in_base_unit(other_unit.val);
			val=T::from_base(temp);
		}
		AggregateUnits(double _val): val(_val){
		}	
	};
	
	template<typename T>
	class AggregateUnits<T, 0, 0, 0, 0, 0, 0, 0>{
		public:
		double val;

		AggregateUnits(double _val): val(_val){
		}
		
	
		operator double(){
			return T::in_base_unit(val);
		}		
	};
	
	template<typename T1, typename T2, int N1, int N2, int N3, int N4, int N5, int N6, int N7>
	AggregateUnits<Base, N1, N2, N3, N4, N5, N6, N7> operator+(AggregateUnits<T1, N1, N2, N3, N4, N5, N6, N7> lhs, AggregateUnits<T2, N1, N2, N3, N4, N5, N6, N7> rhs){
		return AggregateUnits<Base, N1, N2, N3, N4, N5, N6, N7>(T1::in_base_unit(lhs.val)+T2::in_base_unit(rhs.val));
	}

	// t


	template<typename T1, typename T2, int N1, int N2, int N3, int N4, int N5, int N6, int N7>
	AggregateUnits<Base, N1, N2, N3, N4, N5, N6, N7> operator-(AggregateUnits<T1, N1, N2, N3, N4, N5, N6, N7> lhs, AggregateUnits<T2, N1, N2, N3, N4, N5, N6, N7> rhs){
		return AggregateUnits<Base, N1, N2, N3, N4, N5, N6, N7>(T1::in_base_unit(lhs.val)-T2::in_base_unit(rhs.val));
	}	

	template<typename T1, typename T2, int AN1, int AN2, int AN3, int AN4, int AN5, int AN6, int AN7, int BN1, int BN2, int BN3, int BN4, int BN5, int BN6, int BN7>
	AggregateUnits<Base, AN1+BN1, AN2+BN2, AN3+BN3, AN4+BN4, AN5+BN5, AN6+BN6, AN7+BN7> operator*(AggregateUnits<T1, AN1, AN2, AN3, AN4, AN5, AN6, AN7> lhs, AggregateUnits<T2, BN1, BN2, BN3, BN4, BN5, BN6, BN7> rhs){
		return AggregateUnits<Base, AN1+BN1, AN2+BN2, AN3+BN3, AN4+BN4, AN5+BN5, AN6+BN6, AN7+BN7>(T1::in_base_unit(lhs.val)*T2::in_base_unit(rhs.val));
	}	

	template<typename T1, typename T2, int AN1, int AN2, int AN3, int AN4, int AN5, int AN6, int AN7, int BN1, int BN2, int BN3, int BN4, int BN5, int BN6, int BN7>
	AggregateUnits<Base, AN1-BN1, AN2-BN2, AN3-BN3, AN4-BN4, AN5-BN5, AN6-BN6, AN7-BN7> operator/(AggregateUnits<T1, AN1, AN2, AN3, AN4, AN5, AN6, AN7> lhs, AggregateUnits<T2, BN1, BN2, BN3, BN4, BN5, BN6, BN7> rhs){
		return AggregateUnits<Base, AN1-BN1, AN2-BN2, AN3-BN3, AN4-BN4, AN5-BN5, AN6-BN6, AN7-BN7>(T1::in_base_unit(lhs.val)/T2::in_base_unit(rhs.val));
	}

	const char* unitnames[7]={"m","g","t","K","A","mol","cd"};
	
	template<int E, typename ...Args>
	void stream_units(std::ostream& os,int pos, int N, Args... Ns){
		if (N!=0){
			os<<unitnames[pos]<<"^"<<std::to_string(N); //change later to remove string dependency
		}
		stream_units<E-1>(os, ++pos,Ns...);
	}
	
	template<>
	void stream_units<0>(std::ostream& os, int pos, int N){
		if (N!=0){
			os<<unitnames[pos]<<"^"<<std::to_string(N);//change later to remove string dependency
		}
	}

	//This allows the unit classes to be printed out via std::cout
	template<typename T, int N1, int N2, int N3, int N4, int N5, int N6, int N7>
	std::ostream& operator<<(std::ostream& os, AggregateUnits<T, N1, N2, N3, N4, N5, N6, N7> a){
		os<<T::in_base_unit(a.val);
		//os<<a.val;
		stream_units<6>(os,0,N1,N2,N3,N4,N5,N6,N7);
		return os;
	}
	

	
}
