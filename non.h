#include "Elemento.h"

#ifndef NON_H
#define NON_H

class non:public Elemento{
    public:
        string trabajo;
        int fuerza;
        int velocidad;

        non();
        non(string, int,int);

        string getTrabajo();
        int getFuerza();
        int getVelocidad();

        string toString();
 };
#endif
