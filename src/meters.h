#pragma once
#include <ostream>
// #include "kilometers.h"
// #include "decimeters.h"
// #include "centimeters.h"
// #include "millimeters.h"
// #include "micrometers.h"
// #include "nanometers.h"

class Meter{
    
    public:
    double val;
    
    Meter(double _val):val(_val){
        
    }
    
    Meter operator+(Meter m){
        return Meter(val + m.val);
    }
    

};

Meter operator "" _m(long double v);

Meter operator "" _m(unsigned long long int v){
    return Meter(double(v));
}

std::ostream& operator<<(std::ostream& os, Meter m){
        os << m.val << "  meters";
        return os;
}


Meter operator+(Meter m, Kilometer km){
        return Meter(m.val + 1000 * km.val);
}

Meter operator+(Meter m, Decimeter dm){
        return Meter(m.val + 0.1 * dm.val);
}

Meter operator+(Meter m, Centimeter cm){
        return Meter(m.val + 0.01 * cm.val);
}

Meter operator+(Meter m, Millimeter mm){
        return Meter(m.val + 0.001 * mm.val);
}

Meter operator+(Meter m, Micrometer µm){
        return Meter(m.val + 1e-6 * µm.val);
}

Meter operator+(Meter m, Nanometer nm){
        return Meter(m.val + 1e-9 * nm.val);
}
