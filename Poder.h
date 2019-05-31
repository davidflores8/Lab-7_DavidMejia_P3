#ifndef PODER_H
#define PODER_H

#include <string>
using std::string;

class Poder{
    public:
        string nombre;
        int nivel;

        Poder();
        Poder(string, int);

        string getNombre();
        int getNivel();

        virtual string toString();
};
#endif