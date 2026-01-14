#include "Persona.h"
#include <iostream>
using namespace std;

Persona::Persona(){
    edad = 0;
}

void Persona::setEdad(){
    cout<<"Ingresa tu edad"<<endl;
    cin>>edad;
}
int Persona::getEdad(){
    return edad;
}
int Persona::edadMercurio(){
    int Mercurio;
    Mercurio = (edad*365)/88;
    return Mercurio;
}

int Persona::edadVenus(){
    int Venus;
    Venus = (edad*365)/225;
    return Venus;
}

int Persona::edadJupiter(){
    int Jupiter;
    Jupiter = (edad*365)/4380;
    return Jupiter;
}

int Persona::edadSaturno(){
    int Saturno;
    Saturno = (edad*365)/10767;
    return Saturno;
}

void Persona::imprimirEdades(){
    cout<<"Tu edad en años en: "<<endl;
    cout<<"La Tierra: "<<edad<<endl<<"Mercurio: "<<edadMercurio()<<endl;
    cout<<"Venus: "<<edadVenus()<<endl<<"Jupiter: "<<edadJupiter()<<endl;
    cout<<"Saturno: "<<edadSaturno()<<endl;
}

Persona::~Persona(){
    //Destructor
}