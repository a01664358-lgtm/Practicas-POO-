#include "Circulo.cpp"
#include <iostream>

using namespace std;

int main(){
    Circulo C;
    C.setRadio();
    C.getRadio();
    cout<<"El area de tu circulo es: "<<C.Calcular_Area()<<endl;
    return 0;
}