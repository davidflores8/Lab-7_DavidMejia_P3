#include "Ofensivo.h"
#include <sstream>
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
    retorno<<"Poder ofensivo: \nNombre: "<<nombre<<"\nNivel: "<<nivel<<"\n Rango: "<<rango<<"\n Fuerza: "<<fuerza<<"\n";
    return retorno.str();
    
}