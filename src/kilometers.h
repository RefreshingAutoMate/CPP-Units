#pragma once
#include <ostream>
// #include "meters.h"
// #include "decimeters.h"
// #include "centimeters.h"
// #include "millimeters.h"
// #include "micrometers.h"
// #include "nanometers.h"

class Kilometer{
    
    public:
    double val;
    
    Kilometer(double _val):val(_val){
        
    }
    
    Kilometer operator+(Kilometer km){
        return Kilometer(val + km.val);
    }
    

};

Kilometer operator "" _km(long double v);


Kilometer operator "" _km(unsigned long long int v){
    return Kilometer(double(v));
}

std::ostream& operator<<(std::ostream& os, Kilometer km){
        os << km.val << "  kilometers";
        return os;
}


Kilometer operator+(Kilometer km, Meter m){
        return Kilometer(km.val + 0.001 * m.val);
}

Kilometer operator+(Kilometer km, Decimeter dm){
        return Kilometer(km.val + 1e-4 * dm.val);
}

Kilometer operator+(Kilometer km, Centimeter cm){
        return Kilometer(km.val + 1e-5 * cm.val);
}

Kilometer operator+(Kilometer km, Millimeter mm){
        return Kilometer(km.val + 1e-6 * mm.val);
}

Kilometer operator+(Kilometer km, Micrometer µm){
        return Kilometer(km.val + 1e-9 * µm.val);
}

Kilometer operator+(Kilometer km, Nanometer nm){
        return Kilometer(km.val + 1e-12 * nm.val);
}

