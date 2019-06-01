#include "Invocacion.h"
#include <sstream>
#include <iostream>
using std::cout;
using std::endl;
using std::cout;
using std::stringstream;

Invocacion::Invocacion(){

}

Invocacion::Invocacion(string n, int nv, string no, string e, string h, string t):Poder(n,nv){
    nombre_e=no;
    especie=e;
    habilidad=h;
    tipo=t;
}

string Invocacion::getNombre_M(){
    return nombre_e;
}

string Invocacion::getEspecie(){
    return especie;
}

string Invocacion::getHabilidad(){
    return habilidad;
}

string Invocacion::getTipo(){
    return tipo;
}

string Invocacion::toString(){
    stringstream retorno;
    string r;
    cout<<Poder::toString()<<endl;
    cout<<"\n Nombre de la mascota: "<<nombre_e;
    cout<<"\n Especie: "<<especie;
    cout<<"Habilidad de la mascota: "<<habilidad<<endl;
    cout<<"\nTipo de mascota: "<<tipo;
    r=retorno.str();
    return r;
    
}
