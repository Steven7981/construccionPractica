#include <iostream>
#include "piezas.cpp"
#include <string>

class partesCasa{
    private:
        piezasLegos pieza1;
        piezasLegos pieza2;
        piezasLegos pieza3;
        piezasLegos pieza4;
        piezasLegos arregloPiezas[3];
    
    public:

        void construirParte(piezasLegos pieza1, piezasLegos pieza2, piezasLegos pieza3,piezasLegos pieza4){
            arregloPiezas[0]=pieza1;
            arregloPiezas[1]=pieza2;
            arregloPiezas[2]=pieza3;
            arregloPiezas[3]=pieza4;
            this->pieza1=pieza1;
            this->pieza2=pieza2;
            this->pieza3=pieza3;
            this->pieza4=pieza4;
        }

        piezasLegos getPiezas(){
            piezasLegos conjunto[3];
            conjunto[0]=pieza1;
            conjunto[1]=pieza2;
            conjunto[2]=pieza3;
            conjunto[3]=pieza4;
            }
        
};