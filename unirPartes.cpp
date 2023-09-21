#include "partesCasa.cpp"
#include <vector>

class Conjunto{
    public:
    std::vector<partesCasa> arregloConjunto;

    void unir(partesCasa parte){
        arregloConjunto.push_back(parte);
    }

};