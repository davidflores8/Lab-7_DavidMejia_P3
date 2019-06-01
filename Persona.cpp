#include "Persona.h"
#include <sstream>
#include <iostream>
using std::stringstream;
using std::endl;
using std::cin;

Persona::Persona(){

}

Persona::Persona(string n, string na, int e, string s, Elemento* el){
        nombre=n;
        nacion=na;
        edad=e;
        sexo=s;
        elemento=el;
}

string Persona::getNombre(){
    return nombre;
}

string Persona::getNacion(){
    return nacion;
}

int Persona::getEdad(){
    return edad;
}

string Persona::getSexo(){
    return sexo;
}

Elemento* Persona::getElemento(){
    return elemento;
}

string Persona::toString(){
    stringstream retorno;
    string r;
    std::cout<<"nombre de esta vaina: "<<nombre<<"   "<<endl;
    retorno<<"\nNombre: "<<nombre<<"\nNacion: "<<nacion<<"\nEdad: "<<edad<<"\nSexo: "<<sexo<<"\nElemento: "<<elemento->toString()<<"\n";
    r=retorno.str();
    return r;
}
Persona::~Persona(){
    delete elemento;
}