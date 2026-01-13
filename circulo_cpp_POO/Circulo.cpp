#include "Circulo.h"
#include <iostream>

using namespace std;

Circulo::Circulo(){
    float radio = 0;
    float area = 0;
}

float Circulo::getRadio(){
    return radio;
}

void Circulo::setRadio(){
    cout<<"Ingrese el radio del círculo: ";
    cin>>radio;
}

float Circulo::Calcular_Area(){
    area = 3.14159265 * (radio*radio);
    return area;
}

Circulo::~Circulo(){
    //destructor
}
