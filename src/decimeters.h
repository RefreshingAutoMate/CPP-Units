#pragma once
#include <ostream>
// #include "kilometers.h"
// #include "meters.h"
// #include "centimeters.h"
// #include "millimeters.h"
// #include "micrometers.h"
// #include "nanometers.h"

class Decimeter{
    
    public:
    double val;
    
    Decimeter(double _val):val(_val){
        
    }
    
    Decimeter operator+(Decimeter dm){
        return Decimeter(val + dm.val);
    }   

};

Decimeter operator "" _dm(long double v);

Decimeter operator "" _dm(unsigned long long int v){
        return Decimeter(double(v));
}

std::ostream& operator<<(std::ostream& os, Decimeter dm){
        os << dm.val << " decimeters";
        return os;
}


Decimeter operator+(Decimeter dm, Kilometer km){
        return Decimeter(dm.val + 10000 * km.val);
}

Decimeter operator+(Decimeter dm, Meter m){
        return Decimeter(dm.val + 10 * m.val);
}

Decimeter operator+(Decimeter dm, Centimeter cm){
        return Decimeter(dm.val + 0.1 * cm.val);
}

Decimeter operator+(Decimeter dm, Millimeter mm){
        return Decimeter(dm.val + 0.01 * mm.val);
}

Decimeter operator+(Decimeter dm, Micrometer µm){
        return Decimeter(dm.val + 1e-5 * µm.val);
}

Decimeter operator+(Decimeter dm, Nanometer nm){
        return Decimeter(dm.val + 1e-8 * nm.val);
}

