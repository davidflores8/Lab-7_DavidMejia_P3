#include "Poder.h"

#ifndef DEFENSIVOS_H
#define DEFENSIVOS_H

class Defensivos:public Poder{
    public:
        int resistencia;
        int duracion;

        Defensivos();
        Defensivos(string, int, int,int);

        int getResistencia();
        int getDuracion();

        string toString();

};
#endif