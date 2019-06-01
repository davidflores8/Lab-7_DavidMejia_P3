#include "Fire.h"
#include <sstream>
using std::stringstream;

Fire::Fire(){

}

Fire::Fire(int c, int v){
    cicatrices=c;
    victorias=v;
}

int Fire::getCicatrices(){
    return cicatrices;
}

void Fire::setCicatrices(int c){
    cicatrices=c;
}

int Fire::getVictorias(){
    return victorias;
}

void Fire::setVictorias(int v){
    victorias=v;
}

string Fire::toString(){
    stringstream retorno;
    string r;
    retorno<<"Fire Bender:\n Cantidad de cicatrices: "<<cicatrices<<"\nCantidad de victorias en Pai Sho: "<<victorias<<"\n";
    r=retorno.str();
    return r;
}

string Fire::getClass(){
    return "Fire";
}