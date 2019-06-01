#include "Invocacion.h"
#include <sstream>
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
    retorno<<"Poder ofensivo: \nNombre: "<<nombre<<"\nNivel: "<<nivel<<"\n Nombre de la mascota: "<<nombre_e<<"\n Especie: "<<especie<<"\n";
    retorno<<"Habilidad de la mascota: "<<habilidad<<"\nTipo de mascota: "<<tipo<<"\n";
    r=retorno.str();
    return r;
    
}
