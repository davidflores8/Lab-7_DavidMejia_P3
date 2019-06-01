#include "Defensivos.h"
#include <sstream>
#include <iostream>
using std::cout;
using std::endl;
using std::cout;
using std::stringstream;

Defensivos::Defensivos(){

}

Defensivos::Defensivos(string n, int nv, int r, int d){
    nombre=n;
    nivel=nv;
    resistencia=r;
    duracion=d;
}

int Defensivos::getResistencia(){
    return resistencia;
}

int Defensivos::getDuracion(){
    return duracion;
}

string Defensivos::toString(){
    stringstream retorno;
    string r;
    cout<<Poder::toString();
    cout<<"\nResistencia: "<<resistencia;
    cout<<"\nDuracion: "<<duracion;
    r=retorno.str();
    return r;
    
}