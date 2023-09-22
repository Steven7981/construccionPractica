#ifndef PIEZAS_CPP
#define PIEZAS_CPP
#include <iostream>
#include <string>
#include <queue>

class piezasLegos{
    public:
        std::queue <std::string> crearPieza(std::string nombre,std::queue<std::string>& cola){
            cola.push(nombre);
            return cola;
    }
};

#endif
