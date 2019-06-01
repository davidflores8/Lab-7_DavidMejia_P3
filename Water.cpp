#include "Water.h"
#include <sstream>
using std::stringstream;

Water::Water(){

}

Water::Water(string t, string a){
    tribu=t;
    arma=a;
}

string Water::getTribu(){
    return tribu;
}

void Water::setTribu(string t){
    tribu=t;
}

string Water::getArma(){
    return arma;
}

void Water::setArma(string a){
    arma=a;
}

string Water::toString(){
    stringstream retorno;
    string r;
    retorno<<"Water Bender\nTribu: "<<tribu<<"\nArma de preferencia: "<<arma<<"\n";
    r=retorno.str();
    return r;
    
}

string Water::getClass(){
    return "Water";
}