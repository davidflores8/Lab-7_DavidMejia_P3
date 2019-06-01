#include "Earth.h"
#include <sstream>
#include <iostream>
using std::cout;
using std::endl;
using std::stringstream;

Earth::Earth(){

}

Earth::Earth(int c, int g){
    coles=c;
    graduacion=g;
}

int Earth::getColes(){
    return  coles;
}

void Earth::setColes(int c){
    coles=c;
}

int Earth::getGraduacion(){
    return graduacion;
}

void Earth::setGraduacion(int g){
    graduacion=g;
}

string Earth::toString(){
    stringstream retorno;
    string r;
    cout<<"Water bender\nCantidad de coles: "<<coles;
    cout<<"\nGraduacion de Ojos: "<<graduacion;
    r=retorno.str();
    return r;
}

string Earth::getClass(){
    return "Earth";
}
