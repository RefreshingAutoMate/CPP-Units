#pragma once
#include <ostream>
// #include "kilometers.h"
// #include "meters.h"
// #include "decimeters.h"
// #include "centimeters.h"
// #include "millimeters.h"
// #include "nanometers.h"

class Micrometer{
    
    public:
    double val;
    
    Micrometer(double _val):val(_val){
        
    }
    
    Micrometer operator+(Micrometer µm){
        return Micrometer(val + µm.val);
    }   

};

Micrometer operator "" _µm(long double v);

Micrometer operator "" _µm(unsigned long long int v){
        return Micrometer(double(v));
}

std::ostream& operator<<(std::ostream& os, Micrometer µm){
        os << µm.val << " micrometers";
        return os;
}


Micrometer operator+(Micrometer µm, Kilometer km){
        return Micrometer(µm.val + 1e9 * km.val);
}

Micrometer operator+(Micrometer µm, Meter m){
        return Micrometer( µm.val + 1e6 * m.val);
}

Micrometer operator+(Micrometer µm, Decimeter dm){
        return Micrometer(µm.val + 100000 * dm.val);
}

Micrometer operator+(Micrometer µm, Centimeter cm){
        return Micrometer(µm.val + 10000 * cm.val);
}

Micrometer operator+(Micrometer µm, Millimeter mm){
        return Micrometer(µm.val + 1000 * mm.val);
}

Micrometer operator+(Micrometer µm, Nanometer nm){
        return Micrometer(µm.val + 0.001 * nm.val);
}


