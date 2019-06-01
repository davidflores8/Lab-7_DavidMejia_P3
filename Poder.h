#ifndef PODER_H
#define PODER_H
#include <iostream>
using std::cin;
using std::endl;

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