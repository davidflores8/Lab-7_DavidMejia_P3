#include "Poder.h"
#include <sstream>
#include <iostream>
using std::endl;
using std::cin;
using std::stringstream;

Poder::Poder(){

}

Poder::Poder(string n, int nv){
    nombre=n;
    nivel=nv;
}

string Poder::getNombre(){
    return nombre;
}

int Poder::getNivel(){
    return nivel;
}

string Poder::toString(){
    stringstream retorno;
    string r;
    retorno<<"Poder: \nNombre: "<<nombre<<"\nNivel de poder: "<<nivel<<"\n";
    r=retorno.str();
    return r;
}