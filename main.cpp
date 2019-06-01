#include <iostream>
#include <string>
#include <iostream>
#include <vector>
#include "Air.h"
#include "Fire.h"
#include "Water.h"
#include "Earth.h"
#include "non.h"
#include "Ofensivo.h"
#include "Defensivos.h"
#include "Curativos.h"
#include "Invocacion.h"
#include "Persona.h"
#include "Poder.h"
#include "Elemento.h"
#include "Maestro.h"
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()  {
    int opcion=1;
    vector <Persona*> personas;
    Elemento* elemento;
    Poder* poder;
    while(opcion>0 && opcion<5){
        cout<<"Bienvenido\nIngrese la opcion que desea: "<<endl;
        cout<<"1. Agregar personas"<<endl;
        cout<<"2. Listar personas"<<endl;
        cout<<"3. Eliminar personas"<<endl;
        cout<<"4. Salir"<<endl;
        cin>>opcion;
        switch(opcion){
            case 1:
            {
                string nombre, nacion, sexo;
                
                int edad;
                int t_e;
                cout<<"Ingrese nombre: "<<endl;
                cin>>nombre;
                cout<<"Ingrese nacion: "<<endl;
                cin>>nacion;
                cout<<"Ingrese sexo [Femenino / Masculino]: "<<endl;
                cin>>sexo;
                cout<<"Ingrese edad: "<<endl;
                cin>>edad;
                cout<<"Que tipo de elemento tiene? "<<endl;
                cout<<"1.Air Bender\n2. Fire Bender \n3. Water Bender\n4.Earth Bender\n5.Non-Bender"<<endl;
                cout<<"Ingrese su respuesta: "<<endl;
                cin>>t_e;
                switch(t_e){
                    case 1:
                    {
                        int pelo;
                        string flechas;
                        cout<<"Ingrese la cantidad de pelo :"<<endl;
                        cin>>pelo;
                        cout<<"Ingrese el tipo de flechas: "<<endl;
                        cin>>flechas;
                        elemento= new Air(flechas,pelo);
                    }
                    break;
                    case 2:{
                        int cicatrices, victorias;
                        cout<<"Ingrese la cantidad de cicatrices :"<<endl;
                        cin>>cicatrices;
                        cout<<"Ingrese el tipo de victorias en Pai Sho: "<<endl;
                        cin>>victorias;
                        elemento=new Fire(cicatrices, victorias);
                    }
                    break;
                    case 3:{
                        string tribu, arma;
                        cout<<"Ingrese la tribu a la que pertenece :"<<endl;
                        cin>>tribu;
                        cout<<"Ingrese el arma de preferencia: "<<endl;
                        cin>>arma;
                        elemento=new Water(tribu, arma);
                    }
                    break;
                    case 4:{
                        int coles, graduacion;
                        cout<<"Ingrese la cantidad de coles cosechadas :"<<endl;
                        cin>>coles;
                        cout<<"Ingrese la graduacion de los ojos : "<<endl;
                        cin>>graduacion;
                        while(graduacion>20 && graduacion<0){
                            cout<<"Ingrese una graduacion correcta: "<<endl;
                            cin>>graduacion;
                        }
                        elemento=new Earth(coles, graduacion);
                    }
                    break;
                    case 5:{
                        string trabajo;
                        int fuerza, velocidad;
                        cout<<"Ingrese el trabajo que realiza: "<<endl;
                        cin>>trabajo;
                        cout<<"Ingrese la fuerza: "<<endl;
                        cin>>fuerza;
                        cout<<"Ingrese la velocidad: "<<endl;
                        cin>>velocidad;
                        elemento=new non(trabajo, fuerza, velocidad);
                    }
                    break;
                }
                if(t_e==5){
                    personas.push_back(new Persona(nombre, nacion,edad,sexo,elemento));
                    cout<<"Persona agregada con exito"<<endl;
                }
                else{
                    int p;
                    string nombre_;
                    int nivel;
                    cout<<" "<<endl;
                    cout<<"Ingrese su tipo de poder: "<<endl;
                    cout<<"1. Ofensivo\n2.Defensivo\n3.Curativo\n4.Invocacion de mascota"<<endl;
                    cin>>p;
                    cout<<"Ingrese el nombre: "<<endl;
                    cin>>nombre_;
                    cout<<"Ingrese el nivel"<<endl;
                    cin>>nivel;
                    switch(p){
                        case 1:{
                               string rango;
                               int fuerza;
                               cout<<"Ingrese el rango: "<<endl;
                               cin>>rango;
                               cout<<"Ingrese la fuerza: "<<endl;
                               cin>>fuerza;
                               poder= new Ofensivo(nombre_, nivel,rango,fuerza);
                               personas.push_back(new Maestro(nombre, nacion, edad,sexo, elemento, poder));
                        }
                        break;
                        case 2:{
                            int resistencia,duracion;
                            cout<<"Ingrese la resistencia: "<<endl;
                            cin>>resistencia;
                            cout<<"Ingrese la duracion: "<<endl;
                            cin>>duracion;
                            poder=new Defensivos(nombre_, nivel, resistencia, duracion);
                            personas.push_back(new Maestro(nombre,nacion,edad,sexo,elemento,poder));
                        } 
                        break;
                        case 3:{
                            string tipo;
                            cout<<"Ingrese el tipo de curacion: "<<endl;
                            cin>>tipo;
                            poder=new Curativos(nombre_, nivel, tipo);
                            personas.push_back(new Maestro(nombre,nacion,edad,sexo,elemento,poder));
                        }
                        break;
                        case 4:{
                            string nombre_e, especie, habilidad, tipo;
                            cout<<"Ingrese el nombre de la mascota: "<<endl;
                            cin>>nombre_e;
                            cout<<"Ingrese la especie: "<<endl;
                            cin>>especie;
                            cout<<"Ingrese la habilidad: "<<endl;
                            cin>>habilidad;
                            cout<<"Ingrese el tipo: "<<endl;
                            cin>>tipo;
                            poder=new Invocacion(nombre_, nivel, nombre_e, especie, habilidad, tipo);
                            personas.push_back(new Maestro(nombre,nacion,edad,sexo,elemento,poder));

                        }
                        cout<<"Poder ingresado correctamente"<<endl;
                        cout<<" "<<endl;
                        cout<<" "<<endl;
                    }
                    cout<<"Maestro agregado con exito"<<endl;
                    cout<<" "<<endl;
                    cout<<" "<<endl;
                }

            }
            break;
            case 2:{
                for (int i = 0; i <personas.size(); i++)
                {

                    if(personas[i]->getElemento()->getClass().compare("Water")==0){
                        personas[i]->toString();
                        cout<<" "<<endl;
                        cout<<" "<<endl;
                    }
                    

                }
                cout<<" "<<endl;
                cout<<" "<<endl;
                for (int i = 0; i <personas.size(); i++)
                {

                    if(personas[i]->getElemento()->getClass().compare("Air")==0){
                        personas[i]->toString();
                        cout<<" "<<endl;
                        cout<<" "<<endl;
                    }
                    

                }
                cout<<" "<<endl;
                cout<<" "<<endl;
                for (int i = 0; i <personas.size(); i++)
                {

                    if(personas[i]->getElemento()->getClass().compare("Fire")==0){
                        personas[i]->toString();
                        cout<<" "<<endl;
                        cout<<" "<<endl;
                    }
                    

                }
                cout<<" "<<endl;
                cout<<" "<<endl;
                for (int i = 0; i <personas.size(); i++)
                {

                    if(personas[i]->getElemento()->getClass().compare("Earth")==0){
                        personas[i]->toString();
                        cout<<" "<<endl;
                        cout<<" "<<endl;
                    }
                    

                }
                cout<<" "<<endl;
                cout<<" "<<endl;

                for (int i = 0; i <personas.size(); i++)
                {

                    if(personas[i]->getElemento()->getClass().compare("non")==0){
                        personas[i]->toString();
                        cout<<" "<<endl;
                        cout<<" "<<endl;
                    }
                    

                }
                cout<<" "<<endl;
                cout<<" "<<endl;

            }
            break;
            case 3:{

            }
            break;
            case 4:{
                for (int i = 0; i <personas.size(); i++)
                {
                    delete personas[i];
                }
                personas.clear();
                opcion=10;
            }
        }
    }   

    return 0;
}

