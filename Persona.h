#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include "Elemento.h"
using std::string;
#include <sstream>
using std::stringstream;
#include <iostream>
using std::cin;
using std::endl;


class Persona{
    public:
        string nombre;
        string nacion;
        int edad;
        string sexo;
        Elemento *elemento;

        Persona();
        Persona(string,string,int,string,Elemento*);

        string getNombre();
        string getNacion();
        int getEdad();
        string getSexo();
        Elemento* getElemento();

        virtual string toString();

        ~Persona();

};

#endif