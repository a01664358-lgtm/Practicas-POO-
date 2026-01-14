#include "Temperatura.h"
#include <iostream>
#include <iomanip> //Usando la fundión std::setprecision
using namespace std;

Temperatura::Temperatura(){
    celsius = 0;
}

void Temperatura::setCelsius(){
    cout<<"Indique la temperatura en C°"<<endl;
    cin>>celsius;
}

float Temperatura::getCelsius(){
    return celsius;
}

float Temperatura::conversionAFahrenheit(){
    float fahrenheit;
    fahrenheit = (celsius*1.8) + 32;
    return fahrenheit;
}

void Temperatura::imprimeFahrenheit(){
    cout<<"El valor de la temperatura en F° es: "<<fixed << setprecision(2) << conversionAFahrenheit() << endl;
}

Temperatura::~Temperatura(){
    //destructor
}