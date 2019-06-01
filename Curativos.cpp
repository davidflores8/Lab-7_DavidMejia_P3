#include "Curativos.h"
#include <sstream>
#include <iostream>
using std::cout;
using std::endl;
using std::cout;
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
    cout<<Poder::toString();
    cout<<"\n Tipo de curacion : "<<tipo;
    r=retorno.str();
    return retorno.str();
    
}