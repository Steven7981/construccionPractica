
#include <iostream>
#include "partesCasa.cpp"
#include <vector>
#include "piezas.cpp"
#include <queue>
#include "unirPartes.cpp"

int main(){
    Conjunto arregloCasa;
    piezasLegos p1;
    piezasLegos p2;
    piezasLegos p3;
    piezasLegos p4;
    std::queue<std::vector<std::string > > colaCasa;
    std::queue <std::string> colaPiezas;
    std::queue<std::vector<std::string > > colaFinal;

    partesCasa cuarto;
    p1.crearPieza("Bloque",colaPiezas);
    p2.crearPieza("piso",colaPiezas);
    p3.crearPieza("techo",colaPiezas);
    p4.crearPieza("ventana",colaPiezas);
    cuarto.construirParte(colaPiezas,4,colaCasa);
    arregloCasa.unir(colaCasa,1,colaFinal);

    return 1;

}