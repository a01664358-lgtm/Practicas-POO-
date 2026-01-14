#include "IMC.h"
#include <iostream>
#include <cmath>
using namespace std;

IMC::IMC(){
    peso = 0;
    altura = 0;
}

void IMC::setPeso(){
    cout<<"Ingrese su peso en kg"<<endl;
    cin>>peso;
}
void IMC::setAltura(){
    cout<<"Ingrese su altura en mts"<<endl;
    cin>>altura;
}

float IMC::getPeso(){
    return peso;
}

float IMC::getAltura(){
    return altura;
}

float IMC::calculaIMC(){
    float imc;
    imc = peso/pow(altura,2);
    return imc;
}

void IMC::imprimeIMC(){
    cout<<"EL IMC resultante es: "<<calculaIMC()<<endl;
}

IMC::~IMC(){
    //destructuor
}