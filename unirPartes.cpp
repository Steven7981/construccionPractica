#include "partesCasa.cpp"
#include <vector>

class Conjunto{
    public:
    std::queue<std::vector<std::string>> colaCasa;
    std::vector<std::string> listaPartes;

    void unir(std::queue<std::string>& colaPiezas,int i){
        for (int j = 0; j<i;j++){
                std::string aux=colaPiezas.front();
                colaPiezas.pop();
                listaPartes.push_back(aux);
            }
            colaCasa.push(listaPartes);
        }
};