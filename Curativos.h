#include "Poder.h"

#ifndef CURATIVOS_H
#define CURATIVOS_H

class Curativos:public Poder{
    public:
        string tipo;

        Curativos();
        Curativos(string, int , string);

        string getTipo();

        string toString();
};
#endif