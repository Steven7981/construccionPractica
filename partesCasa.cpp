#ifndef PARTES
#define PARTES
#include <iostream>
#include "piezas.cpp"
#include <string>
#include <queue>

class partesCasa{    
    public:
        std::vector<std::string> listaPiezas;

        std::queue<std::vector<std::string > > construirParte(std::queue<std::string>& colaPiezas,int i,std::queue<std::vector<std::string > > colaPartes){
            for (int j = 0; j<i;j++){
                std::string aux=colaPiezas.front();
                colaPiezas.pop();
                listaPiezas.push_back(aux);
            }
            colaPartes.push(listaPiezas);
            return colaPartes;
        }


};

#endif