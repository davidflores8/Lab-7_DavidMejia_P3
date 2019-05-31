#include "Maestro.h"
#include <sstream>
using std::stringstream;

Maestro::Maestro(){

}

Maestro::Maestro(string n, string na, int e, string s, Elemento el, Poder p):Persona(n,na,e,s,el){
    poder=p;
}

Poder Maestro::getPoder(){
    return poder;
}

string Maestro::toString(){
    stringstream retorno;
    retorno<<"\nNombre: "<<nombre<<"\nNacion: "<<nacion<<"\nEdad: "<<edad<<"\nSexo: "<<sexo<<"\nElemento: "<<elemento.toString()<<"\n";
    retorno<<"Poder: "<<poder.toString()<<"\n";
    return retorno.str();
}