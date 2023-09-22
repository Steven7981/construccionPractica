#include <iostream>
#include "piezas.cpp"
#include <string>
#include <queue>

class partesCasa{
    private:
        piezasLegos pieza1;
        piezasLegos pieza2;
        piezasLegos pieza3;
        piezasLegos pieza4;
        piezasLegos arregloPiezas[3];
    
    public:
        std::queue<std::vector<std::string>> colaPartes;
        std::vector<std::string> listaPiezas;

        void construirParte(std::queue<std::string>& colaPiezas,int i){
            for (int j = 0; j<i;j++){
                std::string aux=colaPiezas.front();
                colaPiezas.pop();
                listaPiezas.push_back(aux);
            }
            colaPartes.push(listaPiezas);
        }

};