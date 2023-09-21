
#include <iostream>
#include "partesCasa.cpp"

int main(){
    piezasLegos p1;
    piezasLegos p2;
    piezasLegos p3;
    piezasLegos p4;

    p1.crearPieza("Bloque");
    p2.crearPieza("piso");
    p3.crearPieza("techo");
    p4.crearPieza("ventana");

    partesCasa cuarto;
    partesCasa arreglo[999];

    cuarto.construirParte(p1,p2,p3,p4);

    return 1;
}