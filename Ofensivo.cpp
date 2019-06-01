#include "Ofensivo.h"
#include <sstream>
#include <iostream>
using std::cout;
using std::endl;
using std::cout;
using std::stringstream;

Ofensivo::Ofensivo(){

}

Ofensivo::Ofensivo(string n, int nv, string r, int f){
    nombre=n;
    nivel=nv;
    rango=r;
    fuerza=f;
}

string Ofensivo::getRango(){
    return rango;
}

int Ofensivo::getFuerza(){
    return fuerza;
}

string Ofensivo::toString(){
    stringstream retorno;
    string r;
    cout<<Poder::toString()<<endl;
    cout<<"\nRango: "<<rango;
    cout<<"\nFuerza: "<<fuerza;
    r=retorno.str();
    return r;
    
}