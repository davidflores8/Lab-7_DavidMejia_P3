#include "Earth.h"
#include <sstream>
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
    retorno<<"Water bender\nCantidad de coles: "<<coles<<"\nGraduacion de Ojos: "<<graduacion<<"\n";
    return retorno.str();
}
