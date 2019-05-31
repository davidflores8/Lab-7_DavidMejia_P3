#include "Air.h"
#include <sstream>
using std::stringstream;

Air::Air(){

}

Air::Air(string flechas_, int pelo_){
    pelo=pelo_;
    flechas=flechas_;
}

string Air::getFlechas(){
    return flechas;
}

void Air::setFlechas(string p){
    flechas=p;
}

int Air::getPelo(){
    return pelo;
}

void Air::setPelo(int p){
    pelo=p;
}

string Air::toString(){
    stringstream retorno;
    retorno<<"Air: \nCantidad de flechas: "<<flechas<<"\nCantidad de pelo: "<<pelo<<"\n";
    return retorno.str();
}