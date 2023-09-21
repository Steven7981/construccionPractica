#include <iostream>
#include "piezas.cpp"

class partesCasa{
    private:
        std::string pieza1;
        std::string pieza2;
        std::string pieza3;
        std::string pieza4;
    
    public:

        std::string construirParte(std::string pieza1, std::string pieza2, std::string pieza3,std::string pieza4){
            this->pieza1=pieza1;
            this->pieza2=pieza2;
            this->pieza3=pieza3;
            this->pieza4=pieza4;
        }

};