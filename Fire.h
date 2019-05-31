#include "Elemento.h"

#ifndef FIRE_H
#define FIRE_H

class Fire:public Elemento{
    public:
        int cicatrices;
        int victorias;

        Fire();
        Fire(int,int);
        
        int getCicatrices();
        void setCicatrices(int);
        int getVictorias();
        void setVictorias(int);
        string toString();
};
#endif