#include "Persona.h"
#include "Poder.h"

#ifndef MAESTRO_H
#define MAESTRO_H

class Maestro:public Persona{
    public:
        Poder poder;

        Maestro();
        Maestro(string,string,int,string,Elemento, Poder);

        Poder getPoder();

        string toString();

};
#endif