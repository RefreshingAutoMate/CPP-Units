#pragma once

#include "baseunits.h"
// #define Pascal(n) (&cppunits::SquareMeter(1) / cppunits::Meter(n))

namespace cppunits{


    // Defining units of length

    using Yottameter = AggregateUnits<Yotta, 1, 0, 0, 0, 0, 0, 0>;
    using Zettameter = AggregateUnits<Zetta, 1, 0, 0, 0, 0, 0, 0>;
    using Exameter = AggregateUnits<Exa, 1, 0, 0, 0, 0, 0, 0>;
    using Petameter = AggregateUnits<Peta, 1, 0, 0, 0, 0, 0, 0>;
    using Terameter = AggregateUnits<Tera, 1, 0, 0, 0, 0, 0, 0>;
    using Gigameter = AggregateUnits<Giga, 1, 0, 0, 0, 0, 0, 0>;
    using Megameter = AggregateUnits<Mega, 1, 0, 0, 0, 0, 0, 0>;
    using Kilometer = AggregateUnits<Kilo, 1, 0, 0, 0, 0, 0, 0>;
    using Hectometer = AggregateUnits<Hecto, 1, 0, 0, 0, 0, 0, 0>;
    using Decameter = AggregateUnits<Deca, 1, 0, 0, 0, 0, 0, 0>;
    using Meter = AggregateUnits<Base, 1, 0, 0, 0, 0, 0, 0>;
    using Decimeter =   AggregateUnits<Deci, 1, 0, 0, 0, 0, 0, 0>;
    using Centimeter = AggregateUnits<Centi, 1, 0, 0, 0, 0, 0, 0>;
    using Millimeter = AggregateUnits<Milli, 1, 0, 0, 0, 0, 0, 0>;
    using Micrometer = AggregateUnits<Micro, 1, 0, 0, 0, 0, 0, 0>;
    using Nanometer = AggregateUnits<Nano, 1, 0, 0, 0, 0, 0, 0>;
    using Picometer = AggregateUnits<Pico, 1, 0, 0, 0, 0, 0, 0>;
    using Femtometer = AggregateUnits<Femto, 1, 0, 0, 0, 0, 0, 0>;
    using Attometer = AggregateUnits<Atto, 1, 0, 0, 0, 0, 0, 0>;
    using Zeptometer = AggregateUnits<Zepto, 1, 0, 0, 0, 0, 0, 0>;
    using Yoctometer = AggregateUnits<Yocto, 1, 0, 0, 0, 0, 0, 0>;
//Ab hier die Einheiten kontrollieren
    using SquareYottameter = AggregateUnits<Yotta, 2, 0, 0, 0, 0, 0, 0>;
    using SquareZettameter = AggregateUnits<Zetta, 2, 0, 0, 0, 0, 0, 0>;
    using SquareExameter = AggregateUnits<Exa, 2, 0, 0, 0, 0, 0, 0>;
    using SquarePetameter = AggregateUnits<Peta, 2, 0, 0, 0, 0, 0, 0>;
    using SquareTerameter = AggregateUnits<Tera, 2, 0, 0, 0, 0, 0, 0>;
    using SquareGigameter = AggregateUnits<Giga, 2, 0, 0, 0, 0, 0, 0>;
    using SquareMegameter = AggregateUnits<Mega, 2, 0, 0, 0, 0, 0, 0>;
    using SquareKilometer = AggregateUnits<Kilo, 2, 0, 0, 0, 0, 0, 0>;
    using SquareHectometer = AggregateUnits<Hecto, 2, 0, 0, 0, 0, 0, 0>;
    using SquareDecameter = AggregateUnits<Deca, 2, 0, 0, 0, 0, 0, 0>;
    using SquareMeter = AggregateUnits<Base, 2, 0, 0, 0, 0, 0, 0>; //ist OK
    using SquareDecimeter =   AggregateUnits<Deci, 2, 0, 0, 0, 0, 0, 0>;
    using SquareCentimeter = AggregateUnits<Centi, 2, 0, 0, 0, 0, 0, 0>;
    using SquareMillimeter = AggregateUnits<Milli, 2, 0, 0, 0, 0, 0, 0>;
    using SquareMicrometer = AggregateUnits<Micro, 2, 0, 0, 0, 0, 0, 0>;
    using SquareNanometer = AggregateUnits<Nano, 2, 0, 0, 0, 0, 0, 0>;
    using SquarePicometer = AggregateUnits<Pico, 2, 0, 0, 0, 0, 0, 0>;
    using SquareFemtometer = AggregateUnits<Femto, 2, 0, 0, 0, 0, 0, 0>;
    using SquareAttometer = AggregateUnits<Atto, 2, 0, 0, 0, 0, 0, 0>;
    using SquareZeptometer = AggregateUnits<Zepto, 2, 0, 0, 0, 0, 0, 0>;
    using SquareYoctometer = AggregateUnits<Yocto, 2, 0, 0, 0, 0, 0, 0>;


    using CubicYottameter = AggregateUnits<Yotta, 3, 0, 0, 0, 0, 0, 0>;
    using CubicZettameter = AggregateUnits<Zetta, 3, 0, 0, 0, 0, 0, 0>;
    using CubicExameter = AggregateUnits<Exa, 3, 0, 0, 0, 0, 0, 0>;
    using CubicPetameter = AggregateUnits<Peta, 3, 0, 0, 0, 0, 0, 0>;
    using CubicTerameter = AggregateUnits<Tera, 3, 0, 0, 0, 0, 0, 0>;
    using CubicGigameter = AggregateUnits<Giga, 3, 0, 0, 0, 0, 0, 0>;
    using CubicMegameter = AggregateUnits<Mega, 3, 0, 0, 0, 0, 0, 0>;
    using CubicKilometer = AggregateUnits<Kilo, 3, 0, 0, 0, 0, 0, 0>;
    using CubicHectometer = AggregateUnits<Hecto, 3, 0, 0, 0, 0, 0, 0>;
    using CubicDecameter = AggregateUnits<Deca, 3, 0, 0, 0, 0, 0, 0>;
    using CubicMeter = AggregateUnits<Base, 3, 0, 0, 0, 0, 0, 0>; //ist OK
    using CubicDecimeter =   AggregateUnits<Milli, 3, 0, 0, 0, 0, 0, 0>;
    using CubicCentimeter = AggregateUnits<Centi, 3, 0, 0, 0, 0, 0, 0>;
    using CubicMillimeter = AggregateUnits<Milli, 3, 0, 0, 0, 0, 0, 0>;
    using CubicMicrometer = AggregateUnits<Micro, 3, 0, 0, 0, 0, 0, 0>;
    using CubicNanometer = AggregateUnits<Nano, 3, 0, 0, 0, 0, 0, 0>;
    using CubicPicometer = AggregateUnits<Pico, 3, 0, 0, 0, 0, 0, 0>;
    using CubicFemtometer = AggregateUnits<Femto, 3, 0, 0, 0, 0, 0, 0>;
    using CubicAttometer = AggregateUnits<Atto, 3, 0, 0, 0, 0, 0, 0>;
    using CubicZeptometer = AggregateUnits<Zepto, 3, 0, 0, 0, 0, 0, 0>;
    using CubicYoctometer = AggregateUnits<Yocto, 3, 0, 0, 0, 0, 0, 0>;

//bis hier die Einheiten kontrollieren

    // Defining units of mass

    using Yottagram = AggregateUnits<Yotta, 0, 1, 0, 0, 0, 0, 0>;
    using Zettagram = AggregateUnits<Zetta, 0, 1, 0, 0, 0, 0, 0>;
    using Exagram = AggregateUnits<Exa, 0, 1, 0, 0, 0, 0, 0>;
    using Petagram = AggregateUnits<Peta, 0, 1, 0, 0, 0, 0, 0>;
    using Teragram = AggregateUnits<Tera, 0, 1, 0, 0, 0, 0, 0>;
    using Gigagram = AggregateUnits<Giga, 0, 1, 0, 0, 0, 0, 0>;
    using Megagram = AggregateUnits<Mega, 0, 1, 0, 0, 0, 0, 0>;
    using Kilogram = AggregateUnits<Kilo, 0, 1, 0, 0, 0, 0, 0>;
    using Hectogram = AggregateUnits<Hecto, 0, 1, 0, 0, 0, 0, 0>;
    using Decagram = AggregateUnits<Deca, 0, 1, 0, 0, 0, 0, 0>;
    using Gram = AggregateUnits<Base, 0, 1, 0, 0, 0, 0, 0>;
    using Decigram =   AggregateUnits<Deci, 0, 1, 0, 0, 0, 0, 0>;
    using Centigram = AggregateUnits<Centi, 0, 1, 0, 0, 0, 0, 0>;
    using Milligram = AggregateUnits<Milli, 0, 1, 0, 0, 0, 0, 0>;
    using Microgram = AggregateUnits<Micro, 0, 1, 0, 0, 0, 0, 0>;
    using Nanogram = AggregateUnits<Nano, 0, 1, 0, 0, 0, 0, 0>;
    using Picogram = AggregateUnits<Pico, 0, 1, 0, 0, 0, 0, 0>;
    using Femtogram = AggregateUnits<Femto, 0, 1, 0, 0, 0, 0, 0>;
    using Attogram = AggregateUnits<Atto, 0, 1, 0, 0, 0, 0, 0>;
    using Zeptogram = AggregateUnits<Zepto, 0, 1, 0, 0, 0, 0, 0>;
    using Yoctogram = AggregateUnits<Yocto, 0, 1, 0, 0, 0, 0, 0>;


    // Defining units of time

    using Yottasecond = AggregateUnits<Yotta, 0, 0, 1, 0, 0, 0, 0>;
    using Zettasecond = AggregateUnits<Zetta, 0, 0, 1, 0, 0, 0, 0>;
    using Exasecond = AggregateUnits<Exa, 0, 0, 1, 0, 0, 0, 0>;
    using Petasecond = AggregateUnits<Peta, 0, 0, 1, 0, 0, 0, 0>;
    using Terasecond = AggregateUnits<Tera, 0, 0, 1, 0, 0, 0, 0>;
    using Gigasecond = AggregateUnits<Giga, 0, 0, 1, 0, 0, 0, 0>;
    using Megasecond = AggregateUnits<Mega, 0, 0, 1, 0, 0, 0, 0>;
    using Kilosecond = AggregateUnits<Kilo, 0, 0, 1, 0, 0, 0, 0>;
    using Hectosecond = AggregateUnits<Hecto, 0, 0, 1, 0, 0, 0, 0>;
    using Decasecond = AggregateUnits<Deca, 0, 0, 1, 0, 0, 0, 0>;
    using Second = AggregateUnits<Base, 0, 0, 1, 0, 0, 0, 0>;
    using Decisecond =   AggregateUnits<Deci, 0, 0, 1, 0, 0, 0, 0>;
    using Centisecond = AggregateUnits<Centi, 0, 0, 1, 0, 0, 0, 0>;
    using Millisecond = AggregateUnits<Milli, 0, 0, 1, 0, 0, 0, 0>;
    using Microsecond = AggregateUnits<Micro, 0, 0, 1, 0, 0, 0, 0>;
    using Nanosecond = AggregateUnits<Nano, 0, 0, 1, 0, 0, 0, 0>;
    using Picosecond = AggregateUnits<Pico, 0, 0, 1, 0, 0, 0, 0>;
    using Femtosecond = AggregateUnits<Femto, 0, 0, 1, 0, 0, 0, 0>;
    using Attosecond = AggregateUnits<Atto, 0, 0, 1, 0, 0, 0, 0>;
    using Zeptosecond = AggregateUnits<Zepto, 0, 0, 1, 0, 0, 0, 0>;
    using Yoctosecond = AggregateUnits<Yocto, 0, 0, 1, 0, 0, 0, 0>;


    // Defining units of temperature

    using Yottakelvin = AggregateUnits<Yotta, 0, 0, 0, 1, 0, 0, 0>;
    using Zettakelvin = AggregateUnits<Zetta, 0, 0, 0, 1, 0, 0, 0>;
    using Exakelvin = AggregateUnits<Exa, 0, 0, 0, 1, 0, 0, 0>;
    using Petakelvin = AggregateUnits<Peta, 0, 0, 0, 1, 0, 0, 0>;
    using Terakelvin = AggregateUnits<Tera, 0, 0, 0, 1, 0, 0, 0>;
    using Gigakelvin = AggregateUnits<Giga, 0, 0, 0, 1, 0, 0, 0>;
    using Megakelvin = AggregateUnits<Mega, 0, 0, 0, 1, 0, 0, 0>;
    using Kilokelvin = AggregateUnits<Kilo, 0, 0, 0, 1, 0, 0, 0>;
    using Hectokelvin = AggregateUnits<Hecto, 0, 0, 0, 1, 0, 0, 0>;
    using Decakelvin = AggregateUnits<Deca, 0, 0, 0, 1, 0, 0, 0>;
    using Kelvin = AggregateUnits<Base, 0, 0, 0, 1, 0, 0, 0>;
    using Decikelvin =   AggregateUnits<Deci, 0, 0, 0, 1, 0, 0, 0>;
    using Centikelvin = AggregateUnits<Centi, 0, 0, 0, 1, 0, 0, 0>;
    using Millikelvin = AggregateUnits<Milli, 0, 0, 0, 1, 0, 0, 0>;
    using Microkelvin = AggregateUnits<Micro, 0, 0, 0, 1, 0, 0, 0>;
    using Nanokelvin = AggregateUnits<Nano, 0, 0, 0, 1, 0, 0, 0>;
    using Picokelvin = AggregateUnits<Pico, 0, 0, 0, 1, 0, 0, 0>;
    using Femtokelvin = AggregateUnits<Femto, 0, 0, 0, 1, 0, 0, 0>;
    using Attokelvin = AggregateUnits<Atto, 0, 0, 0, 1, 0, 0, 0>;
    using Zeptokelvin = AggregateUnits<Zepto, 0, 0, 0, 1, 0, 0, 0>;
    using Yoctokelvin = AggregateUnits<Yocto, 0, 0, 0, 1, 0, 0, 0>;


    // Defining units of current

    using Yottaampere = AggregateUnits<Yotta, 0, 0, 0, 0, 1, 0, 0>;
    using Zettaampere = AggregateUnits<Zetta, 0, 0, 0, 0, 1, 0, 0>;
    using Exaampere = AggregateUnits<Exa, 0, 0, 0, 0, 1, 0, 0>;
    using Petaampere = AggregateUnits<Peta, 0, 0, 0, 0, 1, 0, 0>;
    using Teraampere = AggregateUnits<Tera, 0, 0, 0, 0, 1, 0, 0>;
    using Gigaampere = AggregateUnits<Giga, 0, 0, 0, 0, 1, 0, 0>;
    using Megaampere = AggregateUnits<Mega, 0, 0, 0, 0, 1, 0, 0>;
    using Kiloampere = AggregateUnits<Kilo, 0, 0, 0, 0, 1, 0, 0>;
    using Hectoampere = AggregateUnits<Hecto, 0, 0, 0, 0, 1, 0, 0>;
    using Decaampere = AggregateUnits<Deca, 0, 0, 0, 0, 1, 0, 0>;
    using Ampere = AggregateUnits<Base, 0, 0, 0, 0, 1, 0, 0>;
    using Deciampere =   AggregateUnits<Deci, 0, 0, 0, 0, 1, 0, 0>;
    using Centiampere = AggregateUnits<Centi, 0, 0, 0, 0, 1, 0, 0>;
    using Milliampere = AggregateUnits<Milli, 0, 0, 0, 0, 1, 0, 0>;
    using Microampere = AggregateUnits<Micro, 0, 0, 0, 0, 1, 0, 0>;
    using Nanoampere = AggregateUnits<Nano, 0, 0, 0, 0, 1, 0, 0>;
    using Picoampere = AggregateUnits<Pico, 0, 0, 0, 0, 1, 0, 0>;
    using Femtoampere = AggregateUnits<Femto, 0, 0, 0, 0, 1, 0, 0>;
    using Attoampere = AggregateUnits<Atto, 0, 0, 0, 0, 1, 0, 0>;
    using Zeptoampere = AggregateUnits<Zepto, 0, 0, 0, 0, 1, 0, 0>;
    using Yoctoampere = AggregateUnits<Yocto, 0, 0, 0, 0, 1, 0, 0>;



    // Defining units of substance

    using Yottamol = AggregateUnits<Yotta, 0, 0, 0, 0, 0, 1, 0>;
    using Zettamol = AggregateUnits<Zetta, 0, 0, 0, 0, 0, 1, 0>;
    using Examol = AggregateUnits<Exa, 0, 0, 0, 0, 0, 1, 0>;
    using Petamol = AggregateUnits<Peta, 0, 0, 0, 0, 0, 1, 0>;
    using Teramol = AggregateUnits<Tera, 0, 0, 0, 0, 0, 1, 0>;
    using Gigamol = AggregateUnits<Giga, 0, 0, 0, 0, 0, 1, 0>;
    using Megamol = AggregateUnits<Mega, 0, 0, 0, 0, 0, 1, 0>;
    using Kilomol = AggregateUnits<Kilo, 0, 0, 0, 0, 0, 1, 0>;
    using Hectomol = AggregateUnits<Hecto, 0, 0, 0, 0, 0, 1, 0>;
    using Decamol = AggregateUnits<Deca, 0, 0, 0, 0, 0, 1, 0>;
    using Mol = AggregateUnits<Base, 0, 0, 0, 0, 0, 1, 0>;
    using Decimol =   AggregateUnits<Deci, 0, 0, 0, 0, 0, 1, 0>;
    using Centimol = AggregateUnits<Centi, 0, 0, 0, 0, 0, 1, 0>;
    using Millimol = AggregateUnits<Milli, 0, 0, 0, 0, 0, 1, 0>;
    using Micromol = AggregateUnits<Micro, 0, 0, 0, 0, 0, 1, 0>;
    using Nanomol = AggregateUnits<Nano, 0, 0, 0, 0, 0, 1, 0>;
    using Picomol = AggregateUnits<Pico, 0, 0, 0, 0, 0, 1, 0>;
    using Femtomol = AggregateUnits<Femto, 0, 0, 0, 0, 0, 1, 0>;
    using Attomol = AggregateUnits<Atto, 0, 0, 0, 0, 0, 1, 0>;
    using Zeptomol = AggregateUnits<Zepto, 0, 0, 0, 0, 0, 1, 0>;
    using Yoctomol = AggregateUnits<Yocto, 0, 0, 0, 0, 0, 1, 0>;



       // Defining units of luminous intensity

    using Yottacandela = AggregateUnits<Yotta, 0, 0, 0, 0, 0, 0, 1>;
    using Zettacandela = AggregateUnits<Zetta, 0, 0, 0, 0, 0, 0, 1>;
    using Exacandela = AggregateUnits<Exa, 0, 0, 0, 0, 0, 0, 1>;
    using Petacandela = AggregateUnits<Peta, 0, 0, 0, 0, 0, 0, 1>;
    using Teracandela = AggregateUnits<Tera, 0, 0, 0, 0, 0, 0, 1>;
    using Gigacandela = AggregateUnits<Giga, 0, 0, 0, 0, 0, 0, 1>;
    using Megacandela = AggregateUnits<Mega, 0, 0, 0, 0, 0, 0, 1>;
    using Kilocandela = AggregateUnits<Kilo, 0, 0, 0, 0, 0, 0, 1>;
    using Hectocandela = AggregateUnits<Hecto, 0, 0, 0, 0, 0, 0, 1>;
    using Decacandela = AggregateUnits<Deca, 0, 0, 0, 0, 0, 0, 1>;
    using Candela = AggregateUnits<Base, 0, 0, 0, 0, 0, 0, 1>;
    using Decicandela =   AggregateUnits<Deci, 0, 0, 0, 0, 0, 0, 1>;
    using Centicandela = AggregateUnits<Centi, 0, 0, 0, 0, 0, 0, 1>;
    using Millicandela = AggregateUnits<Milli, 0, 0, 0, 0, 0, 0, 1>;
    using Microcandela = AggregateUnits<Micro, 0, 0, 0, 0, 0, 0, 1>;
    using Nanocandela = AggregateUnits<Nano, 0, 0, 0, 0, 0, 0, 1>;
    using Picocandela = AggregateUnits<Pico, 0, 0, 0, 0, 0, 0, 1>;
    using Femtocandela = AggregateUnits<Femto, 0, 0, 0, 0, 0, 0, 1>;
    using Attocandela = AggregateUnits<Atto, 0, 0, 0, 0, 0, 0, 1>;
    using Zeptocandela = AggregateUnits<Zepto, 0, 0, 0, 0, 0, 0, 1>;
    using Yoctocandela = AggregateUnits<Yocto, 0, 0, 0, 0, 0, 0, 1>;

    using Number = cppunits::AggregateUnits<cppunits::Base, 0, 0, 0, 0, 0, 0, 0>;
    using Liter = AggregateUnits<Milli, 3, 0, 0, 0, 0, 0, 0>;

    using Pascal = AggregateUnits<Base, -1, 1, -2, 0, 0, 0, 0>; //TODO: Das "Base"  ändern

    // using Inverse = AggregateUnits<Base, , 0, 0, 0, 0, 0, 0>;

    template<typename T>
    constexpr T Inv(T u)
    {
        

        return u;
    }

    // template<typename T>
    // constexpr cppunits::Pascal Pa(T n)
    // {
    //     auto kg = Kilogram(n);
    //     auto m = Meter(1);
    //     auto s = Second(1);
    //     auto s² = s * s;
    //     auto ms² = m * s²;
    //     auto P = kg / ms²;
    //     return P;
    // }

}

    // Definition of literals for times

    cppunits::Yottasecond operator"" _Ys(long double a)
            {
                return cppunits::Yottasecond(a);
            }
            
    cppunits::Yottasecond operator"" _Ys(unsigned long long int a)
            {
                return cppunits::Yottasecond(a);
            }


    cppunits::Zettasecond operator"" _Zs(long double a)
            {
                return cppunits::Zettasecond(a);
            }
            
    cppunits::Zettasecond operator"" _Zs(unsigned long long int a)
            {
                return cppunits::Zettasecond(a);
            }


    cppunits::Exasecond operator"" _Es(long double a)
            {
                return cppunits::Exasecond(a);
            }
            
    cppunits::Exasecond operator"" _Es(unsigned long long int a)
            {
                return cppunits::Exasecond(a);
            }


    cppunits::Petasecond operator"" _Ps(long double a)
            {
                return cppunits::Petasecond(a);
            }
            
    cppunits::Petasecond operator"" _Ps(unsigned long long int a)
            {
                return cppunits::Petasecond(a);
            }


    cppunits::Terasecond operator"" _Ts(long double a)
            {
                return cppunits::Terasecond(a);
            }
            
    cppunits::Terasecond operator"" _Ts(unsigned long long int a)
            {
                return cppunits::Terasecond(a);
            }


    cppunits::Gigasecond operator"" _Gs(long double a)
            {
                return cppunits::Gigasecond(a);
            }
            
    cppunits::Gigasecond operator"" _Gs(unsigned long long int a)
            {
                return cppunits::Gigasecond(a);
            }


    cppunits::Megasecond operator"" _Ms(long double a)
            {
                return cppunits::Megasecond(a);
            }
            
    cppunits::Megasecond operator"" _Ms(unsigned long long int a)
            {
                return cppunits::Megasecond(a);
            }


    cppunits::Kilosecond operator"" _ks(long double a)
            {
                return cppunits::Kilosecond(a);
            }
            
    cppunits::Kilosecond operator"" _ks(unsigned long long int a)
            {
                return cppunits::Kilosecond(a);
            }


    cppunits::Hectosecond operator"" _hs(long double a)
            {
                return cppunits::Hectosecond(a);
            }
            
    cppunits::Hectosecond operator"" _hs(unsigned long long int a)
            {
                return cppunits::Hectosecond(a);
            }


    cppunits::Decasecond operator"" _das(long double a)
            {
                return cppunits::Decasecond(a);
            }
            
    cppunits::Decasecond operator"" _das(unsigned long long int a)
            {
                return cppunits::Decasecond(a);
            }


    cppunits::Second operator"" _s(long double a)
            {
                return cppunits::Second(a);
            }
            
    cppunits::Second operator"" _s(unsigned long long int a)
            {
                return cppunits::Second(a);
            }


    cppunits::Decisecond operator"" _ds(long double a)
            {
                return cppunits::Decisecond(a);
            }
            
    cppunits::Decisecond operator"" _ds(unsigned long long int a)
            {
                return cppunits::Decisecond(a);
            }


    cppunits::Centisecond operator"" _cs(long double a)
            {
                return cppunits::Centisecond(a);
            }
            
    cppunits::Centisecond operator"" _cs(unsigned long long int a)
            {
                return cppunits::Centisecond(a);
            }


    cppunits::Millisecond operator"" _ms(long double a)
            {
                return cppunits::Millisecond(a);
            }
            
    cppunits::Millisecond operator"" _ms(unsigned long long int a)
            {
                return cppunits::Millisecond(a);
            }


    cppunits::Microsecond operator"" _µs(long double a)
            {
                return cppunits::Microsecond(a);
            }
            
    cppunits::Microsecond operator"" _µs(unsigned long long int a)
            {
                return cppunits::Microsecond(a);
            }


    cppunits::Nanosecond operator"" _ns(long double a)
            {
                return cppunits::Nanosecond(a);
            }
            
    cppunits::Nanosecond operator"" _ns(unsigned long long int a)
            {
                return cppunits::Nanosecond(a);
            }


    cppunits::Picosecond operator"" _ps(long double a)
            {
                return cppunits::Picosecond(a);
            }
            
    cppunits::Picosecond operator"" _ps(unsigned long long int a)
            {
                return cppunits::Picosecond(a);
            }


    cppunits::Femtosecond operator"" _fs(long double a)
            {
                return cppunits::Femtosecond(a);
            }
            
    cppunits::Femtosecond operator"" _fs(unsigned long long int a)
            {
                return cppunits::Femtosecond(a);
            }


    cppunits::Attosecond operator"" _as(long double a)
            {
                return cppunits::Attosecond(a);
            }
            
    cppunits::Attosecond operator"" _as(unsigned long long int a)
            {
                return cppunits::Attosecond(a);
            }


    cppunits::Zeptosecond operator"" _zs(long double a)
            {
                return cppunits::Zeptosecond(a);
            }
            
    cppunits::Zeptosecond operator"" _zs(unsigned long long int a)
            {
                return cppunits::Zeptosecond(a);
            }


    cppunits::Yoctosecond operator"" _ys(long double a)
            {
                return cppunits::Yoctosecond(a);
            }
            
    cppunits::Yoctosecond operator"" _ys(unsigned long long int a)
            {
                return cppunits::Yoctosecond(a);
            }



    // Definition of literals for lengths

    cppunits::Yottameter operator"" _Ym(long double a)
            {
                return cppunits::Yottameter(a);
            }
            
    cppunits::Yottameter operator"" _Ym(unsigned long long int a)
            {
                return cppunits::Yottameter(a);
            }


    cppunits::Zettameter operator"" _Zm(long double a)
            {
                return cppunits::Zettameter(a);
            }
            
    cppunits::Zettameter operator"" _Zm(unsigned long long int a)
            {
                return cppunits::Zettameter(a);
            }


    cppunits::Exameter operator"" _Em(long double a)
            {
                return cppunits::Exameter(a);
            }
            
    cppunits::Exameter operator"" _Em(unsigned long long int a)
            {
                return cppunits::Exameter(a);
            }


    cppunits::Petameter operator"" _Pm(long double a)
            {
                return cppunits::Petameter(a);
            }
            
    cppunits::Petameter operator"" _Pm(unsigned long long int a)
            {
                return cppunits::Petameter(a);
            }


    cppunits::Terameter operator"" _Tm(long double a)
            {
                return cppunits::Terameter(a);
            }
            
    cppunits::Terameter operator"" _Tm(unsigned long long int a)
            {
                return cppunits::Terameter(a);
            }


    cppunits::Gigameter operator"" _Gm(long double a)
            {
                return cppunits::Gigameter(a);
            }
            
    cppunits::Gigameter operator"" _Gm(unsigned long long int a)
            {
                return cppunits::Gigameter(a);
            }


    cppunits::Megameter operator"" _Mm(long double a)
            {
                return cppunits::Megameter(a);
            }
            
    cppunits::Megameter operator"" _Mm(unsigned long long int a)
            {
                return cppunits::Megameter(a);
            }


    cppunits::Kilometer operator"" _km(long double a)
            {
                return cppunits::Kilometer(a);
            }
            
    cppunits::Kilometer operator"" _km(unsigned long long int a)
            {
                return cppunits::Kilometer(a);
            }


    cppunits::Hectometer operator"" _hm(long double a)
            {
                return cppunits::Hectometer(a);
            }
            
    cppunits::Hectometer operator"" _hm(unsigned long long int a)
            {
                return cppunits::Hectometer(a);
            }


    cppunits::Decameter operator"" _dam(long double a)
            {
                return cppunits::Decameter(a);
            }
            
    cppunits::Decameter operator"" _dam(unsigned long long int a)
            {
                return cppunits::Decameter(a);
            }


    cppunits::Meter operator"" _m(long double a)
            {
                return cppunits::Meter(a);
            }
            
    cppunits::Meter operator"" _m(unsigned long long int a)
            {
                return cppunits::Meter(a);
            }


    cppunits::Decimeter operator"" _dm(long double a)
            {
                return cppunits::Decimeter(a);
            }
            
    cppunits::Decimeter operator"" _dm(unsigned long long int a)
            {
                return cppunits::Decimeter(a);
            }


    cppunits::Centimeter operator"" _cm(long double a)
            {
                return cppunits::Centimeter(a);
            }
            
    cppunits::Centimeter operator"" _cm(unsigned long long int a)
            {
                return cppunits::Centimeter(a);
            }


    cppunits::Millimeter operator"" _mm(long double a)
            {
                return cppunits::Millimeter(a);
            }
            
    cppunits::Millimeter operator"" _mm(unsigned long long int a)
            {
                return cppunits::Millimeter(a);
            }


    cppunits::Micrometer operator"" _µm(long double a)
            {
                return cppunits::Micrometer(a);
            }
            
    cppunits::Micrometer operator"" _µm(unsigned long long int a)
            {
                return cppunits::Micrometer(a);
            }


    cppunits::Nanometer operator"" _nm(long double a)
            {
                return cppunits::Nanometer(a);
            }
            
    cppunits::Nanometer operator"" _nm(unsigned long long int a)
            {
                return cppunits::Nanometer(a);
            }


    cppunits::Picometer operator"" _pm(long double a)
            {
                return cppunits::Picometer(a);
            }
            
    cppunits::Picometer operator"" _pm(unsigned long long int a)
            {
                return cppunits::Picometer(a);
            }


    cppunits::Femtometer operator"" _fm(long double a)
            {
                return cppunits::Femtometer(a);
            }
            
    cppunits::Femtometer operator"" _fm(unsigned long long int a)
            {
                return cppunits::Femtometer(a);
            }


    cppunits::Attometer operator"" _am(long double a)
            {
                return cppunits::Attometer(a);
            }
            
    cppunits::Attometer operator"" _am(unsigned long long int a)
            {
                return cppunits::Attometer(a);
            }


    cppunits::Zeptometer operator"" _zm(long double a)
            {
                return cppunits::Zeptometer(a);
            }
            
    cppunits::Zeptometer operator"" _zm(unsigned long long int a)
            {
                return cppunits::Zeptometer(a);
            }


    cppunits::Yoctometer operator"" _ym(long double a)
            {
                return cppunits::Yoctometer(a);
            }
            
    cppunits::Yoctometer operator"" _ym(unsigned long long int a)
            {
                return cppunits::Yoctometer(a);
            }



    // Definition of literals for masses

    cppunits::Yottagram operator"" _Yg(long double a)
            {
                return cppunits::Yottagram(a);
            }
            
    cppunits::Yottagram operator"" _Yg(unsigned long long int a)
            {
                return cppunits::Yottagram(a);
            }


    cppunits::Zettagram operator"" _Zg(long double a)
            {
                return cppunits::Zettagram(a);
            }
            
    cppunits::Zettagram operator"" _Zg(unsigned long long int a)
            {
                return cppunits::Zettagram(a);
            }


    cppunits::Exagram operator"" _Eg(long double a)
            {
                return cppunits::Exagram(a);
            }
            
    cppunits::Exagram operator"" _Eg(unsigned long long int a)
            {
                return cppunits::Exagram(a);
            }


    cppunits::Petagram operator"" _Pg(long double a)
            {
                return cppunits::Petagram(a);
            }
            
    cppunits::Petagram operator"" _Pg(unsigned long long int a)
            {
                return cppunits::Petagram(a);
            }


    cppunits::Teragram operator"" _Tg(long double a)
            {
                return cppunits::Teragram(a);
            }
            
    cppunits::Teragram operator"" _Tg(unsigned long long int a)
            {
                return cppunits::Teragram(a);
            }


    cppunits::Gigagram operator"" _Gg(long double a)
            {
                return cppunits::Gigagram(a);
            }
            
    cppunits::Gigagram operator"" _Gg(unsigned long long int a)
            {
                return cppunits::Gigagram(a);
            }


    cppunits::Megagram operator"" _Mg(long double a)
            {
                return cppunits::Megagram(a);
            }
            
    cppunits::Megagram operator"" _Mg(unsigned long long int a)
            {
                return cppunits::Megagram(a);
            }


    cppunits::Kilogram operator"" _kg(long double a)
            {
                return cppunits::Kilogram(a);
            }
            
    cppunits::Kilogram operator"" _kg(unsigned long long int a)
            {
                return cppunits::Kilogram(a);
            }


    cppunits::Hectogram operator"" _hg(long double a)
            {
                return cppunits::Hectogram(a);
            }
            
    cppunits::Hectogram operator"" _hg(unsigned long long int a)
            {
                return cppunits::Hectogram(a);
            }


    cppunits::Decagram operator"" _dag(long double a)
            {
                return cppunits::Decagram(a);
            }
            
    cppunits::Decagram operator"" _dag(unsigned long long int a)
            {
                return cppunits::Decagram(a);
            }


    cppunits::Gram operator"" _g(long double a)
            {
                return cppunits::Gram(a);
            }
            
    cppunits::Gram operator"" _g(unsigned long long int a)
            {
                return cppunits::Gram(a);
            }


    cppunits::Decigram operator"" _dg(long double a)
            {
                return cppunits::Decigram(a);
            }
            
    cppunits::Decigram operator"" _dg(unsigned long long int a)
            {
                return cppunits::Decigram(a);
            }


    cppunits::Centigram operator"" _cg(long double a)
            {
                return cppunits::Centigram(a);
            }
            
    cppunits::Centigram operator"" _cg(unsigned long long int a)
            {
                return cppunits::Centigram(a);
            }


    cppunits::Milligram operator"" _mg(long double a)
            {
                return cppunits::Milligram(a);
            }
            
    cppunits::Milligram operator"" _mg(unsigned long long int a)
            {
                return cppunits::Milligram(a);
            }


    cppunits::Microgram operator"" _µg(long double a)
            {
                return cppunits::Microgram(a);
            }
            
    cppunits::Microgram operator"" _µg(unsigned long long int a)
            {
                return cppunits::Microgram(a);
            }


    cppunits::Nanogram operator"" _ng(long double a)
            {
                return cppunits::Nanogram(a);
            }
            
    cppunits::Nanogram operator"" _ng(unsigned long long int a)
            {
                return cppunits::Nanogram(a);
            }


    cppunits::Picogram operator"" _pg(long double a)
            {
                return cppunits::Picogram(a);
            }
            
    cppunits::Picogram operator"" _pg(unsigned long long int a)
            {
                return cppunits::Picogram(a);
            }


    cppunits::Femtogram operator"" _fg(long double a)
            {
                return cppunits::Femtogram(a);
            }
            
    cppunits::Femtogram operator"" _fg(unsigned long long int a)
            {
                return cppunits::Femtogram(a);
            }


    cppunits::Attogram operator"" _ag(long double a)
            {
                return cppunits::Attogram(a);
            }
            
    cppunits::Attogram operator"" _ag(unsigned long long int a)
            {
                return cppunits::Attogram(a);
            }


    cppunits::Zeptogram operator"" _zg(long double a)
            {
                return cppunits::Zeptogram(a);
            }
            
    cppunits::Zeptogram operator"" _zg(unsigned long long int a)
            {
                return cppunits::Zeptogram(a);
            }


    cppunits::Yoctogram operator"" _yg(long double a)
            {
                return cppunits::Yoctogram(a);
            }
            
    cppunits::Yoctogram operator"" _yg(unsigned long long int a)
            {
                return cppunits::Yoctogram(a);
            }



    // Definition of literals for current

    cppunits::Yottaampere operator"" _YA(long double a)
            {
                return cppunits::Yottaampere(a);
            }
            
    cppunits::Yottaampere operator"" _YA(unsigned long long int a)
            {
                return cppunits::Yottaampere(a);
            }


    cppunits::Zettaampere operator"" _ZA(long double a)
            {
                return cppunits::Zettaampere(a);
            }
            
    cppunits::Zettaampere operator"" _ZA(unsigned long long int a)
            {
                return cppunits::Zettaampere(a);
            }


    cppunits::Exaampere operator"" _EA(long double a)
            {
                return cppunits::Exaampere(a);
            }
            
    cppunits::Exaampere operator"" _EA(unsigned long long int a)
            {
                return cppunits::Exaampere(a);
            }


    cppunits::Petaampere operator"" _PA(long double a)
            {
                return cppunits::Petaampere(a);
            }
            
    cppunits::Petaampere operator"" _PA(unsigned long long int a)
            {
                return cppunits::Petaampere(a);
            }


    cppunits::Teraampere operator"" _TA(long double a)
            {
                return cppunits::Teraampere(a);
            }
            
    cppunits::Teraampere operator"" _TA(unsigned long long int a)
            {
                return cppunits::Teraampere(a);
            }


    cppunits::Gigaampere operator"" _GA(long double a)
            {
                return cppunits::Gigaampere(a);
            }
            
    cppunits::Gigaampere operator"" _GA(unsigned long long int a)
            {
                return cppunits::Gigaampere(a);
            }


    cppunits::Megaampere operator"" _MA(long double a)
            {
                return cppunits::Megaampere(a);
            }
            
    cppunits::Megaampere operator"" _MA(unsigned long long int a)
            {
                return cppunits::Megaampere(a);
            }


    cppunits::Kiloampere operator"" _kA(long double a)
            {
                return cppunits::Kiloampere(a);
            }
            
    cppunits::Kiloampere operator"" _kA(unsigned long long int a)
            {
                return cppunits::Kiloampere(a);
            }


    cppunits::Hectoampere operator"" _hA(long double a)
            {
                return cppunits::Hectoampere(a);
            }
            
    cppunits::Hectoampere operator"" _hA(unsigned long long int a)
            {
                return cppunits::Hectoampere(a);
            }


    cppunits::Decaampere operator"" _daA(long double a)
            {
                return cppunits::Decaampere(a);
            }
            
    cppunits::Decaampere operator"" _daA(unsigned long long int a)
            {
                return cppunits::Decaampere(a);
            }


    cppunits::Ampere operator"" _A(long double a)
            {
                return cppunits::Ampere(a);
            }
            
    cppunits::Ampere operator"" _A(unsigned long long int a)
            {
                return cppunits::Ampere(a);
            }


    cppunits::Deciampere operator"" _dA(long double a)
            {
                return cppunits::Deciampere(a);
            }
            
    cppunits::Deciampere operator"" _dA(unsigned long long int a)
            {
                return cppunits::Deciampere(a);
            }


    cppunits::Centiampere operator"" _cA(long double a)
            {
                return cppunits::Centiampere(a);
            }
            
    cppunits::Centiampere operator"" _cA(unsigned long long int a)
            {
                return cppunits::Centiampere(a);
            }


    cppunits::Milliampere operator"" _mA(long double a)
            {
                return cppunits::Milliampere(a);
            }
            
    cppunits::Milliampere operator"" _mA(unsigned long long int a)
            {
                return cppunits::Milliampere(a);
            }


    cppunits::Microampere operator"" _µA(long double a)
            {
                return cppunits::Microampere(a);
            }
            
    cppunits::Microampere operator"" _µA(unsigned long long int a)
            {
                return cppunits::Microampere(a);
            }


    cppunits::Nanoampere operator"" _nA(long double a)
            {
                return cppunits::Nanoampere(a);
            }
            
    cppunits::Nanoampere operator"" _nA(unsigned long long int a)
            {
                return cppunits::Nanoampere(a);
            }


    cppunits::Picoampere operator"" _pA(long double a)
            {
                return cppunits::Picoampere(a);
            }
            
    cppunits::Picoampere operator"" _pA(unsigned long long int a)
            {
                return cppunits::Picoampere(a);
            }


    cppunits::Femtoampere operator"" _fA(long double a)
            {
                return cppunits::Femtoampere(a);
            }
            
    cppunits::Femtoampere operator"" _fA(unsigned long long int a)
            {
                return cppunits::Femtoampere(a);
            }


    cppunits::Attoampere operator"" _aA(long double a)
            {
                return cppunits::Attoampere(a);
            }
            
    cppunits::Attoampere operator"" _aA(unsigned long long int a)
            {
                return cppunits::Attoampere(a);
            }


    cppunits::Zeptoampere operator"" _zA(long double a)
            {
                return cppunits::Zeptoampere(a);
            }
            
    cppunits::Zeptoampere operator"" _zA(unsigned long long int a)
            {
                return cppunits::Zeptoampere(a);
            }


    cppunits::Yoctoampere operator"" _yA(long double a)
            {
                return cppunits::Yoctoampere(a);
            }
            
    cppunits::Yoctoampere operator"" _yA(unsigned long long int a)
            {
                return cppunits::Yoctoampere(a);
            }


    cppunits::Yottakelvin operator"" _YK(long double a)
            {
                return cppunits::Yottakelvin(a);
            }
            
    cppunits::Yottakelvin operator"" _YK(unsigned long long int a)
            {
                return cppunits::Yottakelvin(a);
            }


    cppunits::Zettakelvin operator"" _ZK(long double a)
            {
                return cppunits::Zettakelvin(a);
            }
            
    cppunits::Zettakelvin operator"" _ZK(unsigned long long int a)
            {
                return cppunits::Zettakelvin(a);
            }


    cppunits::Exakelvin operator"" _EK(long double a)
            {
                return cppunits::Exakelvin(a);
            }
            
    cppunits::Exakelvin operator"" _EK(unsigned long long int a)
            {
                return cppunits::Exakelvin(a);
            }


    cppunits::Petakelvin operator"" _PK(long double a)
            {
                return cppunits::Petakelvin(a);
            }
            
    cppunits::Petakelvin operator"" _PK(unsigned long long int a)
            {
                return cppunits::Petakelvin(a);
            }


    cppunits::Terakelvin operator"" _TK(long double a)
            {
                return cppunits::Terakelvin(a);
            }
            
    cppunits::Terakelvin operator"" _TK(unsigned long long int a)
            {
                return cppunits::Terakelvin(a);
            }


    cppunits::Gigakelvin operator"" _GK(long double a)
            {
                return cppunits::Gigakelvin(a);
            }
            
    cppunits::Gigakelvin operator"" _GK(unsigned long long int a)
            {
                return cppunits::Gigakelvin(a);
            }


    cppunits::Megakelvin operator"" _MK(long double a)
            {
                return cppunits::Megakelvin(a);
            }
            
    cppunits::Megakelvin operator"" _MK(unsigned long long int a)
            {
                return cppunits::Megakelvin(a);
            }


    cppunits::Kilokelvin operator"" _kK(long double a)
            {
                return cppunits::Kilokelvin(a);
            }
            
    cppunits::Kilokelvin operator"" _kK(unsigned long long int a)
            {
                return cppunits::Kilokelvin(a);
            }


    cppunits::Hectokelvin operator"" _hK(long double a)
            {
                return cppunits::Hectokelvin(a);
            }
            
    cppunits::Hectokelvin operator"" _hK(unsigned long long int a)
            {
                return cppunits::Hectokelvin(a);
            }


    cppunits::Decakelvin operator"" _daK(long double a)
            {
                return cppunits::Decakelvin(a);
            }
            
    cppunits::Decakelvin operator"" _daK(unsigned long long int a)
            {
                return cppunits::Decakelvin(a);
            }


    cppunits::Kelvin operator"" _K(long double a)
            {
                return cppunits::Kelvin(a);
            }
            
    cppunits::Kelvin operator"" _K(unsigned long long int a)
            {
                return cppunits::Kelvin(a);
            }


    cppunits::Decikelvin operator"" _dK(long double a)
            {
                return cppunits::Decikelvin(a);
            }
            
    cppunits::Decikelvin operator"" _dK(unsigned long long int a)
            {
                return cppunits::Decikelvin(a);
            }


    cppunits::Centikelvin operator"" _cK(long double a)
            {
                return cppunits::Centikelvin(a);
            }
            
    cppunits::Centikelvin operator"" _cK(unsigned long long int a)
            {
                return cppunits::Centikelvin(a);
            }


    cppunits::Millikelvin operator"" _mK(long double a)
            {
                return cppunits::Millikelvin(a);
            }
            
    cppunits::Millikelvin operator"" _mK(unsigned long long int a)
            {
                return cppunits::Millikelvin(a);
            }


    cppunits::Microkelvin operator"" _µK(long double a)
            {
                return cppunits::Microkelvin(a);
            }
            
    cppunits::Microkelvin operator"" _µK(unsigned long long int a)
            {
                return cppunits::Microkelvin(a);
            }


    cppunits::Nanokelvin operator"" _nK(long double a)
            {
                return cppunits::Nanokelvin(a);
            }
            
    cppunits::Nanokelvin operator"" _nK(unsigned long long int a)
            {
                return cppunits::Nanokelvin(a);
            }


    cppunits::Picokelvin operator"" _pK(long double a)
            {
                return cppunits::Picokelvin(a);
            }
            
    cppunits::Picokelvin operator"" _pK(unsigned long long int a)
            {
                return cppunits::Picokelvin(a);
            }


    cppunits::Femtokelvin operator"" _fK(long double a)
            {
                return cppunits::Femtokelvin(a);
            }
            
    cppunits::Femtokelvin operator"" _fK(unsigned long long int a)
            {
                return cppunits::Femtokelvin(a);
            }


    cppunits::Attokelvin operator"" _aK(long double a)
            {
                return cppunits::Attokelvin(a);
            }
            
    cppunits::Attokelvin operator"" _aK(unsigned long long int a)
            {
                return cppunits::Attokelvin(a);
            }


    cppunits::Zeptokelvin operator"" _zK(long double a)
            {
                return cppunits::Zeptokelvin(a);
            }
            
    cppunits::Zeptokelvin operator"" _zK(unsigned long long int a)
            {
                return cppunits::Zeptokelvin(a);
            }


    cppunits::Yoctokelvin operator"" _yK(long double a)
            {
                return cppunits::Yoctokelvin(a);
            }
            
    cppunits::Yoctokelvin operator"" _yK(unsigned long long int a)
            {
                return cppunits::Yoctokelvin(a);
            }



    // Definition of literals for substance

    cppunits::Yottamol operator"" _Ymol(long double a)
            {
                return cppunits::Yottamol(a);
            }
            
    cppunits::Yottamol operator"" _Ymol(unsigned long long int a)
            {
                return cppunits::Yottamol(a);
            }


    cppunits::Zettamol operator"" _Zmol(long double a)
            {
                return cppunits::Zettamol(a);
            }
            
    cppunits::Zettamol operator"" _Zmol(unsigned long long int a)
            {
                return cppunits::Zettamol(a);
            }


    cppunits::Examol operator"" _Emol(long double a)
            {
                return cppunits::Examol(a);
            }
            
    cppunits::Examol operator"" _Emol(unsigned long long int a)
            {
                return cppunits::Examol(a);
            }


    cppunits::Petamol operator"" _Pmol(long double a)
            {
                return cppunits::Petamol(a);
            }
            
    cppunits::Petamol operator"" _Pmol(unsigned long long int a)
            {
                return cppunits::Petamol(a);
            }


    cppunits::Teramol operator"" _Tmol(long double a)
            {
                return cppunits::Teramol(a);
            }
            
    cppunits::Teramol operator"" _Tmol(unsigned long long int a)
            {
                return cppunits::Teramol(a);
            }


    cppunits::Gigamol operator"" _Gmol(long double a)
            {
                return cppunits::Gigamol(a);
            }
            
    cppunits::Gigamol operator"" _Gmol(unsigned long long int a)
            {
                return cppunits::Gigamol(a);
            }


    cppunits::Megamol operator"" _Mmol(long double a)
            {
                return cppunits::Megamol(a);
            }
            
    cppunits::Megamol operator"" _Mmol(unsigned long long int a)
            {
                return cppunits::Megamol(a);
            }


    cppunits::Kilomol operator"" _kmol(long double a)
            {
                return cppunits::Kilomol(a);
            }
            
    cppunits::Kilomol operator"" _kmol(unsigned long long int a)
            {
                return cppunits::Kilomol(a);
            }


    cppunits::Hectomol operator"" _hmol(long double a)
            {
                return cppunits::Hectomol(a);
            }
            
    cppunits::Hectomol operator"" _hmol(unsigned long long int a)
            {
                return cppunits::Hectomol(a);
            }


    cppunits::Decamol operator"" _damol(long double a)
            {
                return cppunits::Decamol(a);
            }
            
    cppunits::Decamol operator"" _damol(unsigned long long int a)
            {
                return cppunits::Decamol(a);
            }


    cppunits::Mol operator"" _mol(long double a)
            {
                return cppunits::Mol(a);
            }
            
    cppunits::Mol operator"" _mol(unsigned long long int a)
            {
                return cppunits::Mol(a);
            }


    cppunits::Decimol operator"" _dmol(long double a)
            {
                return cppunits::Decimol(a);
            }
            
    cppunits::Decimol operator"" _dmol(unsigned long long int a)
            {
                return cppunits::Decimol(a);
            }


    cppunits::Centimol operator"" _cmol(long double a)
            {
                return cppunits::Centimol(a);
            }
            
    cppunits::Centimol operator"" _cmol(unsigned long long int a)
            {
                return cppunits::Centimol(a);
            }


    cppunits::Millimol operator"" _mmol(long double a)
            {
                return cppunits::Millimol(a);
            }
            
    cppunits::Millimol operator"" _mmol(unsigned long long int a)
            {
                return cppunits::Millimol(a);
            }


    cppunits::Micromol operator"" _µmol(long double a)
            {
                return cppunits::Micromol(a);
            }
            
    cppunits::Micromol operator"" _µmol(unsigned long long int a)
            {
                return cppunits::Micromol(a);
            }


    cppunits::Nanomol operator"" _nmol(long double a)
            {
                return cppunits::Nanomol(a);
            }
            
    cppunits::Nanomol operator"" _nmol(unsigned long long int a)
            {
                return cppunits::Nanomol(a);
            }


    cppunits::Picomol operator"" _pmol(long double a)
            {
                return cppunits::Picomol(a);
            }
            
    cppunits::Picomol operator"" _pmol(unsigned long long int a)
            {
                return cppunits::Picomol(a);
            }


    cppunits::Femtomol operator"" _fmol(long double a)
            {
                return cppunits::Femtomol(a);
            }
            
    cppunits::Femtomol operator"" _fmol(unsigned long long int a)
            {
                return cppunits::Femtomol(a);
            }


    cppunits::Attomol operator"" _amol(long double a)
            {
                return cppunits::Attomol(a);
            }
            
    cppunits::Attomol operator"" _amol(unsigned long long int a)
            {
                return cppunits::Attomol(a);
            }


    cppunits::Zeptomol operator"" _zmol(long double a)
            {
                return cppunits::Zeptomol(a);
            }
            
    cppunits::Zeptomol operator"" _zmol(unsigned long long int a)
            {
                return cppunits::Zeptomol(a);
            }


    cppunits::Yoctomol operator"" _ymol(long double a)
            {
                return cppunits::Yoctomol(a);
            }
            
    cppunits::Yoctomol operator"" _ymol(unsigned long long int a)
            {
                return cppunits::Yoctomol(a);
            }



    // Definition of literals for luminous intensity

    cppunits::Yottacandela operator"" _Ycd(long double a)
            {
                return cppunits::Yottacandela(a);
            }
            
    cppunits::Yottacandela operator"" _Ycd(unsigned long long int a)
            {
                return cppunits::Yottacandela(a);
            }


    cppunits::Zettacandela operator"" _Zcd(long double a)
            {
                return cppunits::Zettacandela(a);
            }
            
    cppunits::Zettacandela operator"" _Zcd(unsigned long long int a)
            {
                return cppunits::Zettacandela(a);
            }


    cppunits::Exacandela operator"" _Ecd(long double a)
            {
                return cppunits::Exacandela(a);
            }
            
    cppunits::Exacandela operator"" _Ecd(unsigned long long int a)
            {
                return cppunits::Exacandela(a);
            }


    cppunits::Petacandela operator"" _Pcd(long double a)
            {
                return cppunits::Petacandela(a);
            }
            
    cppunits::Petacandela operator"" _Pcd(unsigned long long int a)
            {
                return cppunits::Petacandela(a);
            }


    cppunits::Teracandela operator"" _Tcd(long double a)
            {
                return cppunits::Teracandela(a);
            }
            
    cppunits::Teracandela operator"" _Tcd(unsigned long long int a)
            {
                return cppunits::Teracandela(a);
            }


    cppunits::Gigacandela operator"" _Gcd(long double a)
            {
                return cppunits::Gigacandela(a);
            }
            
    cppunits::Gigacandela operator"" _Gcd(unsigned long long int a)
            {
                return cppunits::Gigacandela(a);
            }


    cppunits::Megacandela operator"" _Mcd(long double a)
            {
                return cppunits::Megacandela(a);
            }
            
    cppunits::Megacandela operator"" _Mcd(unsigned long long int a)
            {
                return cppunits::Megacandela(a);
            }


    cppunits::Kilocandela operator"" _kcd(long double a)
            {
                return cppunits::Kilocandela(a);
            }
            
    cppunits::Kilocandela operator"" _kcd(unsigned long long int a)
            {
                return cppunits::Kilocandela(a);
            }


    cppunits::Hectocandela operator"" _hcd(long double a)
            {
                return cppunits::Hectocandela(a);
            }
            
    cppunits::Hectocandela operator"" _hcd(unsigned long long int a)
            {
                return cppunits::Hectocandela(a);
            }


    cppunits::Decacandela operator"" _dacd(long double a)
            {
                return cppunits::Decacandela(a);
            }
            
    cppunits::Decacandela operator"" _dacd(unsigned long long int a)
            {
                return cppunits::Decacandela(a);
            }


    cppunits::Candela operator"" _cd(long double a)
            {
                return cppunits::Candela(a);
            }
            
    cppunits::Candela operator"" _cd(unsigned long long int a)
            {
                return cppunits::Candela(a);
            }


    cppunits::Decicandela operator"" _dcd(long double a)
            {
                return cppunits::Decicandela(a);
            }
            
    cppunits::Decicandela operator"" _dcd(unsigned long long int a)
            {
                return cppunits::Decicandela(a);
            }


    cppunits::Centicandela operator"" _ccd(long double a)
            {
                return cppunits::Centicandela(a);
            }
            
    cppunits::Centicandela operator"" _ccd(unsigned long long int a)
            {
                return cppunits::Centicandela(a);
            }


    cppunits::Millicandela operator"" _mcd(long double a)
            {
                return cppunits::Millicandela(a);
            }
            
    cppunits::Millicandela operator"" _mcd(unsigned long long int a)
            {
                return cppunits::Millicandela(a);
            }


    cppunits::Microcandela operator"" _µcd(long double a)
            {
                return cppunits::Microcandela(a);
            }
            
    cppunits::Microcandela operator"" _µcd(unsigned long long int a)
            {
                return cppunits::Microcandela(a);
            }


    cppunits::Nanocandela operator"" _ncd(long double a)
            {
                return cppunits::Nanocandela(a);
            }
            
    cppunits::Nanocandela operator"" _ncd(unsigned long long int a)
            {
                return cppunits::Nanocandela(a);
            }


    cppunits::Picocandela operator"" _pcd(long double a)
            {
                return cppunits::Picocandela(a);
            }
            
    cppunits::Picocandela operator"" _pcd(unsigned long long int a)
            {
                return cppunits::Picocandela(a);
            }


    cppunits::Femtocandela operator"" _fcd(long double a)
            {
                return cppunits::Femtocandela(a);
            }
            
    cppunits::Femtocandela operator"" _fcd(unsigned long long int a)
            {
                return cppunits::Femtocandela(a);
            }


    cppunits::Attocandela operator"" _acd(long double a)
            {
                return cppunits::Attocandela(a);
            }
            
    cppunits::Attocandela operator"" _acd(unsigned long long int a)
            {
                return cppunits::Attocandela(a);
            }


    cppunits::Zeptocandela operator"" _zcd(long double a)
            {
                return cppunits::Zeptocandela(a);
            }
            
    cppunits::Zeptocandela operator"" _zcd(unsigned long long int a)
            {
                return cppunits::Zeptocandela(a);
            }


    cppunits::Yoctocandela operator"" _ycd(long double a)
            {
                return cppunits::Yoctocandela(a);
            }
            
    cppunits::Yoctocandela operator"" _ycd(unsigned long long int a)
            {
                return cppunits::Yoctocandela(a);
            }


    cppunits::SquareMeter operator"" _m²(long double a)
            {
                return cppunits::SquareMeter(a);
            }
            
    cppunits::SquareMeter operator"" _m²(unsigned long long int a)
            {
                return cppunits::SquareMeter(a);
            }


    cppunits::Pascal operator"" _Pa(long double a)
            {
                // auto x = cppunits::SquareMeter(a)/cppunits::Meter(a);
                // return x;
                return cppunits::Pascal(a);

            }

    cppunits::Pascal operator"" _Pa(unsigned long long int a)
            {
                // auto x = cppunits::SquareMeter(a)/cppunits::Meter(a);
                // return x;
                return cppunits::Pascal(a);
            }






