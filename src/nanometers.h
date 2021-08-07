#pragma once
#include <ostream>
// #include "kilometers.h"
// #include "meters.h"
// #include "decimeters.h"
// #include "centimeters.h"
// #include "millimeters.h"
// #include "micrometers.h"

class Nanometer{
    
    public:
    double val;
    
    Nanometer(double _val):val(_val){
        
    }
    
    Nanometer operator+(Nanometer nm){
        return Nanometer(val + nm.val);
    }   

};

Nanometer operator "" _nm(long double v);

Nanometer operator "" _nm(unsigned long long int v){
        return Nanometer(double(v));
}

std::ostream& operator<<(std::ostream& os, Nanometer nm){
        os << nm.val << " nanometers";
        return os;
}


Nanometer operator+(Nanometer nm, Kilometer km){
        return Nanometer(nm.val + 1e12 * km.val);
}

Nanometer operator+(Nanometer nm, Meter m){
        return Nanometer(nm.val + 1e9 * m.val);
}

Nanometer operator+(Nanometer nm, Decimeter dm){
        return Nanometer(nm.val + 1e8 * dm.val);
}

Nanometer operator+(Nanometer nm, Centimeter cm){
        return Nanometer(nm.val + 1e7 * cm.val);
}

Nanometer operator+(Nanometer nm, Millimeter mm){
        return Nanometer(nm.val + 1e6 * mm.val);
}

Nanometer operator+(Nanometer nm, Micrometer µm){
        return Nanometer(nm.val + 1000 * µm.val);
}