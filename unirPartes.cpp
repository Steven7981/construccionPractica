#ifndef UNIR_CPP
#define UNIR_CPP
#include "partesCasa.cpp"
#include <vector>

class Conjunto{
    private:
    std::queue<std::vector<std::string > > listaPartes;
    public:
    std::queue<std::vector<std::string>> unir(std::queue<std::vector<std::string>> colaCasa, int i,std::queue<std::vector<std::string > > colaFinal) {
        std::vector<std::string> listaPartes; 

        for (int j = 0; j < i; j++) {
                std::vector<std::string> parte = colaCasa.front();
                colaCasa.pop();
                listaPartes.insert(listaPartes.end(), parte.begin(), parte.end());
        }

        colaFinal.push(listaPartes);

        return colaFinal;
    }
};

#endif