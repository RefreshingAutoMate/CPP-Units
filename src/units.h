#pragma once
#include <ostream>
// #include "kilometers.h"
// #include "meters.h"
// #include "decimeters.h"
// #include "centimeters.h"
// #include "millimeters.h"
// #include "micrometers.h"
// #include "nanometers.h"

// class Unit
// {
//     public:
//     double val;
    
//     Unit(double _val):val(_val){
        
//     }
    
//     Unit operator+(Unit km){
//         return Unit(val + km.val);
//     }
    

// };




class Kilometer//: public Unit{
{
    public:
    double val;
    
    Kilometer(double _val):val(_val){
        
    }
    
    Kilometer operator+(Kilometer km){
        return Kilometer(val + km.val);
    }
    

};


class Meter//: public Unit{
{
    public:
    double val;
    
    Meter(double _val):val(_val){
        
    }
    
    Meter operator+(Meter m){
        return Meter(val + m.val);
    }
    

};


class Decimeter//: public Unit{
{
    public:
    double val;
    
    Decimeter(double _val):val(_val){
        
    }
    
    Decimeter operator+(Decimeter dm){
        return Decimeter(val + dm.val);
    }   

};


class Centimeter//: public Unit{
{
    public:
    double val;
    
    Centimeter(double _val):val(_val){
        
    }
    
    Centimeter operator+(Centimeter cm){
        return Centimeter(val + cm.val);
    }   

};


class Millimeter//: public Unit{
{
    public:
    double val;
    
    Millimeter(double _val):val(_val){
        
    }
    
    Millimeter operator+(Millimeter mm){
        return Millimeter(val + mm.val);
    }   

};


class Micrometer//: public Unit{
{
    public:
    double val;
    
    Micrometer(double _val):val(_val){
        
    }
    
    Micrometer operator+(Micrometer µm){
        return Micrometer(val + µm.val);
    }   

};


class Nanometer//: public Unit{
{
    public:
    double val;
    
    Nanometer(double _val):val(_val){
        
    }
    
    Nanometer operator+(Nanometer nm){
        return Nanometer(val + nm.val);
    }   

};



//Definition der Literals
Kilometer operator "" _km(long double v);

Meter operator "" _m(long double v);

Decimeter operator "" _dm(long double v);

Centimeter operator "" _cm(long double v);

Millimeter operator "" _mm(long double v);

Micrometer operator "" _µm(long double v);

Nanometer operator "" _nm(long double v);


Kilometer operator "" _km(unsigned long long int v){
    return Kilometer(double(v));
}

Meter operator "" _m(unsigned long long int v){
    return Meter(double(v));
}

Decimeter operator "" _dm(unsigned long long int v){
        return Decimeter(double(v));
}

Centimeter operator "" _cm(unsigned long long int v){
        return Centimeter(double(v));
}

Millimeter operator "" _mm(unsigned long long int v){
        return Millimeter(double(v));
}

Micrometer operator "" _µm(unsigned long long int v){
        return Micrometer(double(v));
}

Nanometer operator "" _nm(unsigned long long int v){
        return Nanometer(double(v));
}


//Meter operator "" _w (long double w);

/*
Meter operator "" _m(double v){
 Meter(v);
}

Centimeter operator "" _cm(double v){
    return Meter(v);
}

*/

#include "plus.h"
#include "minus.h"
#include "mul.h"
#include "div.h"


std::ostream& operator<<(std::ostream& os, Kilometer km){
        os << km.val << " kilometers";
        return os;
}


std::ostream& operator<<(std::ostream& os, Meter m){
        os << m.val << " meters";
        return os;
}


std::ostream& operator<<(std::ostream& os, Decimeter dm){
        os << dm.val << " decimeters";
        return os;
}


std::ostream& operator<<(std::ostream& os, Centimeter cm){
        os << cm.val << " centimeters";
        return os;
}



std::ostream& operator<<(std::ostream& os, Millimeter mm){
        os << mm.val << " millimeters";
        return os;
}


std::ostream& operator<<(std::ostream& os, Micrometer µm){
        os << µm.val << " micrometers";
        return os;
}


std::ostream& operator<<(std::ostream& os, Nanometer nm){
        os << nm.val << " nanometers";
        return os;
}





// std::ostream& operator<<(std::ostream& os, Unit u){
//         os << u.val ;
//         return os;
// }



