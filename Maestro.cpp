#include "Maestro.h"
#include <sstream>
using std::stringstream;

Maestro::Maestro(){

}

Maestro::Maestro(string n, string na, int e, string s, Elemento* el, Poder* p){
    nombre=n;
    nacion=na;
    edad=e;
    sexo=s;
    elemento=el;
    poder=p;
}

Poder* Maestro::getPoder(){
    return poder;
}

string Maestro::toString(){
    stringstream retorno;
    string r;
    retorno<<Persona::toString();
    retorno<<"Poder: "<<poder->toString()<<"\n";
    r=retorno.str();
    return r;
}

Maestro::~ Maestro(){
    delete elemento;
    delete poder;
}