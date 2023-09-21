#include <iostream>
#include <string>

class piezasLegos{

    private:
        std::string nombre;

    public:

        std::string arregloPiezas[999];

        void crearPieza(std::string nombre){
            this ->nombre=nombre;
    }
   
};