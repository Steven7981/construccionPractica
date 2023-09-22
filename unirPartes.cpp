#ifndef UNIR_CPP
#define UNIR_CPP
#include "partesCasa.cpp"
#include <vector>

class Conjunto{
    public:

    std::vector<std::string> listaPartes;

    std::queue<std::vector<std::string > > unir(std::queue<std::string>& colaPiezas,int i,std::queue<std::vector<std::string > > colaCasa){
        for (int j = 0; j<i;j++){
                std::string aux=colaPiezas.front();
                colaPiezas.pop();
                listaPartes.push_back(aux);
            }
            colaCasa.push(listaPartes);
            return colaCasa;
        }
};

#endif