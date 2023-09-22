#include <iostream>
#include <string>
#include <queue>

class piezasLegos{

    private:
        std::string nombre;

    public:
        std::queue<std::string> arregloPiezas;
        void crearPieza(std::string nombre){
            this ->nombre=nombre;
            arregloPiezas.push(nombre);
    }
   
};