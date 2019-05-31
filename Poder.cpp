#include "Poder.h"
#include <sstream>
using std::stringstream;

Poder::Poder(){

}

Poder::Poder(string n, int nv){
    nombre=n;
    nivel=nv;
}

string Poder::getNombre(){
    return nombre;
}

int Poder::getNivel(){
    return nivel;
}

string Poder::toString(){
    stringstream retorno;
    retorno<<"Poder: \nNombre: "<<nombre<<"\nNivel de poder: "<<nivel<<"\n";
    return retorno.str();
}