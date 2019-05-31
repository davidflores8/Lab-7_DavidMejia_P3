#include "Elemento.h"
#include <string>
using std::string;
#ifndef AIR_H
#define AIR_H

class Air:public Elemento{
    public:
        string flechas;
        int pelo;
        Air();
        Air(string, int);
        string getFlechas();
        void setFlechas(string);
        int getPelo();
        void setPelo(int);
        string toString();

};
#endif