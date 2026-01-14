#include "InteresCompuesto.cpp"
#include <iostream>
using namespace std;

int main(){
    InteresCompuesto I;
    I.setDinero();
    I.setTasaInteres();
    I.setAños();
    I.imprimirInteres();
    return 0;
}