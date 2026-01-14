#include "InteresCompuesto.h"
#include <iostream>
#include <cmath>

using namespace std;

InteresCompuesto::InteresCompuesto(){
    dinero = 0;
    tasaInteres = 0;
    años = 0;
}

void InteresCompuesto::setDinero(){
    cout<<"Ingresa la cantidad de dinero que quieres evaluar en €"<<endl;
    cin>>dinero;
}

void InteresCompuesto::setTasaInteres(){
    cout<<"Ingresa la tasa de interes que deseas evaluar"<<endl;
    cin>>tasaInteres;
}

void InteresCompuesto::setAños(){
    cout<<"Ingresa los años que desea evaluar"<<endl;
    cin>>años;
}

float InteresCompuesto::getDinero(){
    return dinero;
}

float InteresCompuesto::getTasaInteres(){
    return tasaInteres;
}

int InteresCompuesto::getAños(){
    return años;
}

float InteresCompuesto::Interes(){
    float interes;
    interes = (dinero*(1-pow(((tasaInteres/100)),años+1))/(1-(tasaInteres/100)));
    return interes;
}

void InteresCompuesto::imprimirInteres(){
    cout<<"Tu dinero antes de el interés es: "<<dinero<<" €"<<endl;
    cout<<"tu dinero depués del interés es: "<<Interes()<<" €"<<endl;
}

InteresCompuesto::~InteresCompuesto(){
    //Destructor
};