#include "non.h"
#include <sstream>
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
    retorno<<"Non-bender\n Trabajo que realiza: "<<trabajo<<"\n Fuerza: "<<fuerza<<"\nVelocidad: "<<velocidad<<"\n"<<endl;
    return retorno.str();
}

string non::getClass(){
    return "non";
}