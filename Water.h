#include "Elemento.h"

#ifndef WATER_H
#define WATER_H

class Water:public Elemento{
    public:
        string tribu;
        string arma;

        Water();
        Water(string, string);

        string getTribu();
        void setTribu(string);
        string getArma();
        void setArma(string);
        string toString(); 
        string getClass();   
};
#endif