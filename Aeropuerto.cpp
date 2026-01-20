//  Números aleatorios entre 0 y 50: numeroAleatorio = rand() % 51
//  Número aleatorios entre 1 y 100: numeroAleatorio = 1 + rand() % (101-1)
#include "Aeropuerto.h"
#include <iostream>
#include <cmath>
#include <cstdlib> 
using namespace std;
Aeropuerto::Aeropuerto(){
    N= 50;
    pesoNuevo=0;
    for(int i; i<N; i++){
        aviones[i] = 0;
    }
}

void Aeropuerto::llenarArreglo(){
    for(int i = 0; i<N; i++){
        aviones[i] = 5 + rand()%(1000-5+1);
    }
}

void Aeropuerto::calcularDesviacionEstandar(){
    float promedio = 0;
    float desviacionEstandar = 0;
    for(int i = 0; i<N; i++){
        promedio+=aviones[i];
    }
    promedio = promedio/N;
    for(int i= 0; i<N; i++){
       desviacionEstandar += pow((aviones[i] - promedio),2);
    }
    desviacionEstandar = pow((desviacionEstandar/N),0.5);
    cout<<"La desviación estandar es: "<<desviacionEstandar<<endl;
}

void Aeropuerto::calcularVarianza(){
    float varianza = 0, promedio = 0;
    for(int i = 0; i<N; i++){
        promedio+=aviones[i];
    }
    promedio = promedio/N;
    for(int i= 0; i<N; i++){
        varianza += pow((aviones[i] - promedio),2);
    }
    cout<<"La varianza es: "<<varianza<<endl;
    
}
void Aeropuerto::consultarAvion(){
    int indice = 0;
    do{
        cout<<"ingresa el índice de avión (entre 0 y 49) que quieres consultar: "<<endl;
        cin>>indice;
        if(indice > 49 || indice < 0){
            cout<< "Ingresa un índice entre 0 y 49"<<endl;
        }
    }while(indice > 49 || indice < 0);
    cout<<"El avion número: "<<indice<<" tiene un peso de: "<<aviones[indice]<<" Toneladas"<<endl;
}

void Aeropuerto::cambiarPeso(){
    int indice = 0;
    do{
        cout<<"ingresa el índice de avión (entre 0 y 49) al que quieras cambiarle el peso: "<<endl;
        cin>>indice;
        if(indice > 49 || indice < 0){
            cout<< "Ingresa un índice entre 0 y 49"<<endl;
        }
    }while(indice > 49 || indice < 0);
    do{
        cout<<"Ingresa el peso (entre 5 y 1000) en toneladas a cambiar"<<endl;
        cin>>pesoNuevo;
        if(pesoNuevo>1000 || pesoNuevo<5){
            cout<<"Peso fuera de rango, intente de nuevo (Numero entre 5 y 1000) en toneladas"<<endl;
        }
    }while(pesoNuevo>1000 || pesoNuevo<5);
    aviones[indice] = pesoNuevo;
    cout<<"Peso del avión "<<indice<<" cambiado a: "<<pesoNuevo<<endl;
}

Aeropuerto::~Aeropuerto(){
    //dto
}

