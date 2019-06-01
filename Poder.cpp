#include "Poder.h"
#include <sstream>
#include <iostream>
using std::endl;
using std::cin;
using std::cout;
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
    string r;
    cout<<"Poder: \nNombre: "<<nombre;
    cout<<"\nNivel de poder: "<<nivel;
    r=retorno.str();
    return r;
}