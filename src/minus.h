

Kilometer operator-(Kilometer km, Meter m){
        return Kilometer(km.val - 0.001 * m.val);
}

Kilometer operator-(Kilometer km, Decimeter dm){
        return Kilometer(km.val - 1e-4 * dm.val);
}

Kilometer operator-(Kilometer km, Centimeter cm){
        return Kilometer(km.val - 1e-5 * cm.val);
}

Kilometer operator-(Kilometer km, Millimeter mm){
        return Kilometer(km.val - 1e-6 * mm.val);
}

Kilometer operator-(Kilometer km, Micrometer µm){
        return Kilometer(km.val - 1e-9 * µm.val);
}

Kilometer operator-(Kilometer km, Nanometer nm){
        return Kilometer(km.val - 1e-12 * nm.val);
}



Meter operator-(Meter m, Kilometer km){
        return Meter(m.val - 1000 * km.val);
}

Meter operator-(Meter m, Decimeter dm){
        return Meter(m.val - 0.1 * dm.val);
}

Meter operator-(Meter m, Centimeter cm){
        return Meter(m.val - 0.01 * cm.val);
}

Meter operator-(Meter m, Millimeter mm){
        return Meter(m.val - 0.001 * mm.val);
}

Meter operator-(Meter m, Micrometer µm){
        return Meter(m.val - 1e-6 * µm.val);
}

Meter operator-(Meter m, Nanometer nm){
        return Meter(m.val - 1e-9 * nm.val);
}



Decimeter operator-(Decimeter dm, Kilometer km){
        return Decimeter(dm.val - 10000 * km.val);
}

Decimeter operator-(Decimeter dm, Meter m){
        return Decimeter(dm.val - 10 * m.val);
}

Decimeter operator-(Decimeter dm, Centimeter cm){
        return Decimeter(dm.val - 0.1 * cm.val);
}

Decimeter operator-(Decimeter dm, Millimeter mm){
        return Decimeter(dm.val - 0.01 * mm.val);
}

Decimeter operator-(Decimeter dm, Micrometer µm){
        return Decimeter(dm.val - 1e-5 * µm.val);
}

Decimeter operator-(Decimeter dm, Nanometer nm){
        return Decimeter(dm.val - 1e-8 * nm.val);
}



Centimeter operator-(Centimeter cm, Kilometer km){
        return Centimeter(cm.val - 100000 * km.val);
}

Centimeter operator-(Centimeter cm, Meter m){
        return Centimeter(cm.val - 100 * m.val);
}

Centimeter operator-(Centimeter cm, Decimeter dm){
        return Centimeter(cm.val - 10 * dm.val);
}

Centimeter operator-(Centimeter cm, Millimeter mm){
        return Centimeter(cm.val - 0.1 * mm.val);
}

Centimeter operator-(Centimeter cm, Micrometer µm){
        return Centimeter(cm.val - 1e-4 * µm.val);
}

Centimeter operator-(Centimeter cm, Nanometer nm){
        return Centimeter(cm.val - 1e-7 * nm.val);
}



Millimeter operator-(Millimeter mm, Kilometer km){
        return Millimeter(mm.val - 1e6 * km.val);
}

Millimeter operator-(Millimeter mm, Meter m){
        return Millimeter(mm.val -  1000 * m.val);
}

Millimeter operator-(Millimeter mm, Decimeter dm){
        return Millimeter(mm.val - 100 * dm.val);
}

Millimeter operator-(Millimeter mm, Centimeter cm){
        return Millimeter(mm.val - 10 * cm.val);
}

Millimeter operator-(Millimeter mm, Micrometer µm){
        return Millimeter(mm.val - 0.001 * µm.val);
}

Millimeter operator-(Millimeter mm, Nanometer nm){
        return Millimeter(mm.val - 1e-6 * nm.val);
}





Micrometer operator-(Micrometer µm, Kilometer km){
        return Micrometer(µm.val - 1e9 * km.val);
}

Micrometer operator-(Micrometer µm, Meter m){
        return Micrometer( µm.val - 1e6 * m.val);
}

Micrometer operator-(Micrometer µm, Decimeter dm){
        return Micrometer(µm.val - 100000 * dm.val);
}

Micrometer operator-(Micrometer µm, Centimeter cm){
        return Micrometer(µm.val - 10000 * cm.val);
}

Micrometer operator-(Micrometer µm, Millimeter mm){
        return Micrometer(µm.val - 1000 * mm.val);
}

Micrometer operator-(Micrometer µm, Nanometer nm){
        return Micrometer(µm.val - 0.001 * nm.val);
}



Nanometer operator-(Nanometer nm, Kilometer km){
        return Nanometer(nm.val - 1e12 * km.val);
}

Nanometer operator-(Nanometer nm, Meter m){
        return Nanometer(nm.val - 1e9 * m.val);
}

Nanometer operator-(Nanometer nm, Decimeter dm){
        return Nanometer(nm.val - 1e8 * dm.val);
}

Nanometer operator-(Nanometer nm, Centimeter cm){
        return Nanometer(nm.val - 1e7 * cm.val);
}

Nanometer operator-(Nanometer nm, Millimeter mm){
        return Nanometer(nm.val - 1e6 * mm.val);
}

Nanometer operator-(Nanometer nm, Micrometer µm){
        return Nanometer(nm.val - 1000 * µm.val);
}