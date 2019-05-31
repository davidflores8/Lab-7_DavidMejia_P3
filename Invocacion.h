#include "Poder.h"

#ifndef INVOCACION_H
#define INVOCACIOH_H

class Invocacion:public Poder{
    public:
        string nombre_e;
        string especie;
        string habilidad;
        string tipo;

        Invocacion();
        Invocacion(string, int, string,string,string,string);

        string getNombre_M();
        string getEspecie();
        string getHabilidad();
        string getTipo();

        string toString();
};
#endif