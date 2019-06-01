#include "Defensivos.h"
#include <sstream>
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
    retorno<<"Poder ofensivo: \nNombre: "<<nombre<<"\nNivel: "<<nivel<<"\n Resistencia: "<<resistencia<<"\n Duracion: "<<duracion<<"\n"<<endl;
    r=retorno.str();
    return r;
    
}