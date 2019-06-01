#include "Curativos.h"
#include <sstream>
using std::stringstream;

Curativos::Curativos(){

}

Curativos::Curativos(string n, int nv, string t){
        nombre=n;
        nivel=nv;
        tipo=t;
}

string Curativos::getTipo(){
    return tipo;
}

string Curativos::toString(){
    stringstream retorno;
    string r;
    retorno<<"Poder ofensivo: \nNombre: "<<nombre<<"\nNivel: "<<nivel<<"\n Tipo de curacion : "<<tipo<<"\n";
    r=retorno.str();
    return retorno.str();
    
}