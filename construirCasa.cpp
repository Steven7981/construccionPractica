
#include <iostream>
#include "partesCasa.cpp"
#include <vector>
#include "piezas.cpp"
#include <queue>
#include "unirPartes.cpp"

int main(){
    Conjunto arregloCasa;

    //cola donde se van almacenando las piezas creadas por el usuario
    std::queue <std::string> colaPiezas;

    //cola en donde se van almacenando las partes de la casa creadas por el usuario
    std::queue<std::vector<std::string > > colaCasa;

    //cola finaal en donde estan todas las partes de la casa unidas
    std::queue<std::vector<std::string > > colaFinal;

    piezasLegos p1; 
    piezasLegos p2;
    piezasLegos p3;
    piezasLegos p4;
    partesCasa cuarto;

    p1.crearPieza("Bloque",colaPiezas);
    p2.crearPieza("piso",colaPiezas);
    p3.crearPieza("techo",colaPiezas);
    p4.crearPieza("ventana",colaPiezas);
    cuarto.construirParte(colaPiezas,4,colaCasa);
    arregloCasa.unir(colaCasa,1,colaFinal);

    return 1;

}