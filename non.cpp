#include "non.h"
#include <sstream>
#include <iostream>
using std::cout;
using std::endl;
using std::stringstream;

non::non(){

}

non::non(string t, int f, int v){
    trabajo=t;
    fuerza=f;
    velocidad=v;
}

string non::getTrabajo(){
    return trabajo;
}

int non::getVelocidad(){
    return velocidad;
}

int non::getFuerza(){
    return fuerza;
}

string non::toString(){
    stringstream retorno;
    cout<<"Non-bender\n Trabajo que realiza: "<<trabajo;
    cout<<"\nFuerza: "<<fuerza;
    cout<<"\nVelocidad: "<<velocidad;
    return retorno.str();
}

string non::getClass(){
    return "non";
}