#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include "Elemento.h"
using std::string;


class Persona{
    public:
        string nombre;
        string nacion;
        int edad;
        string sexo;
        Elemento elemento;

        Persona();
        Persona(string,string,int,string,Elemento);

        string getNombre();
        string getNacion();
        int getEdad();
        string getSexo();
        Elemento getElemento();

        string toString();


};

#endif