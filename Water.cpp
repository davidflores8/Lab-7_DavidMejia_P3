#include "Water.h"
#include <sstream>
#include <iostream>
using std::cout;
using std::endl;
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
    cout<<"Water Bender\nTribu: "<<tribu;
    cout<<"\nArma de preferencia: "<<arma;
    r=retorno.str();
    return r;
    
}

string Water::getClass(){
    return "Water";
}