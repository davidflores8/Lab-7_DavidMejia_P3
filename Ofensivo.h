#include "Poder.h"

#ifndef OFENSIVO_H
#define OFENSIVO_H

class Ofensivo:public Poder{
    public: 
        string rango;
        int fuerza;

        Ofensivo();
        Ofensivo(string, int, string, int);

        string getRango();
        int getFuerza();

        string toString();

};

#endif