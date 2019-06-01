#include "Air.h"
#include <sstream>
#include <iostream>
using std::cout;
using std::endl;
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
    string r;
    cout<<"Air: \nCantidad de flechas: "<<flechas;
    cout<<"\nCantidad de pelo: "<<pelo<<"\n";
    r=retorno.str();
    return retorno.str();
}

string Air::getClass(){
    return "Air";
}