#pragma once
#include <ostream>
// #include "kilometers.h"
// #include "meters.h"
// #include "decimeters.h"
// #include "centimeters.h"
// #include "micrometers.h"
// #include "nanometers.h"

class Millimeter{
    
    public:
    double val;
    
    Millimeter(double _val):val(_val){
        
    }
    
    Millimeter operator+(Millimeter mm){
        return Millimeter(val + mm.val);
    }   

};

Millimeter operator "" _mm(long double v);

Millimeter operator "" _mm(unsigned long long int v){
        return Millimeter(double(v));
}

std::ostream& operator<<(std::ostream& os, Millimeter mm){
        os << mm.val << " millimeters";
        return os;
}


Millimeter operator+(Millimeter mm, Kilometer km){
        return Millimeter(mm.val + 1e6 * km.val);
}

Millimeter operator+(Millimeter mm, Meter m){
        return Millimeter(mm.val +  1000 * m.val);
}

Millimeter operator+(Millimeter mm, Decimeter dm){
        return Millimeter(mm.val + 100 * dm.val);
}

Millimeter operator+(Millimeter mm, Centimeter cm){
        return Millimeter(mm.val + 10 * cm.val);
}

Millimeter operator+(Millimeter mm, Micrometer µm){
        return Millimeter(mm.val + 0.001 * µm.val);
}

Millimeter operator+(Millimeter mm, Nanometer nm){
        return Millimeter(mm.val + 1e-6 * nm.val);
}


