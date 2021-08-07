#pragma once
#include <ostream>
// #include "kilometers.h"
// #include "meters.h"
// #include "decimeters.h"
// #include "millimeters.h"
// #include "micrometers.h"
// #include "nanometers.h"

class Centimeter{
    
    public:
    double val;
    
    Centimeter(double _val):val(_val){
        
    }
    
    Centimeter operator+(Centimeter cm){
        return Centimeter(val + cm.val);
    }   

};

Centimeter operator "" _cm(long double v);

Centimeter operator "" _cm(unsigned long long int v){
        return Centimeter(double(v));
}

std::ostream& operator<<(std::ostream& os, Centimeter cm){
        os << cm.val << " centimeters";
        return os;
}


Centimeter operator+(Centimeter cm, Kilometer km){
        return Centimeter(cm.val + 100000 * km.val);
}

Centimeter operator+(Centimeter cm, Meter m){
        return Centimeter(cm.val + 100 * m.val);
}

Centimeter operator+(Centimeter cm, Decimeter dm){
        return Centimeter(cm.val + 10 * dm.val);
}

Centimeter operator+(Centimeter cm, Millimeter mm){
        return Centimeter(cm.val + 0.1 * mm.val);
}

Centimeter operator+(Centimeter cm, Micrometer µm){
        return Centimeter(cm.val + 1e-4 * µm.val);
}

Centimeter operator+(Centimeter cm, Nanometer nm){
        return Centimeter(cm.val + 1e-7 * nm.val);
}


