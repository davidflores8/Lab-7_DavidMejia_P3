#include "Persona.h"
#include <sstream>
#include <iostream>
using std::stringstream;
using std::endl;
using std::cin;
using std::cout;

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
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Nacion: "<<nacion<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Elemento: "<<elemento->toString();
    r=retorno.str();
    return r;
}
Persona::~Persona(){
    delete elemento;
}