#include "Elemento.h"

#ifndef EARTH_H
#define EARTH_H

class Earth:public Elemento{
    public:
        int coles;
        int graduacion;

        Earth();
        Earth(int, int);

        int getColes();
        void setColes(int);
        int getGraduacion();
        void setGraduacion(int);

        string toString();
        string getClass();
};
#endif
