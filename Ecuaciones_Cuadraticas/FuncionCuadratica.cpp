#include "FuncionCuadratica.h"
#include <cmath>
#include <iostream>

using namespace std;

FuncionCuadratica::FuncionCuadratica(){
    A = 1;
    B = 1;
    C = 1;
}

void FuncionCuadratica::setABC(){
    do{
        cout<<"Ingresa el coeficiente del termino cuadrático A"<<endl;
        cin>>A;
        cout<<"Ingresa el coeficiente del termino lineal B"<<endl;
        cin>>B;
        cout<<"Ingresa la constante C"<<endl;
        cin>>C;
        if(pow(B,2)<(4*A*C)){
            cout<<"Soluciones imaginarias, ingresa funciones con soluciones reales"<<endl;
        }
    }while(pow(B,2)<(4*A*C));
}

float FuncionCuadratica::getA(){
    return A;
}

float FuncionCuadratica::getB(){
    return B;
}

float FuncionCuadratica::getC(){
    return C;
}

float FuncionCuadratica::solucion1(){
    float x1;
    x1 = (-B+pow(pow(B,2)-4*A*C,0.5))/2*A;
    return x1;
}
float FuncionCuadratica::solucion2(){
    float x2;
    x2 = (-B-pow(pow(B,2)-4*A*C,0.5))/2*A;
    return x2;
}
void FuncionCuadratica::imprimirSoluciones(){
    cout<<"x1 = "<<solucion1()<<endl;
    cout<<"x2 = "<<solucion2()<<endl;
}

FuncionCuadratica::~FuncionCuadratica(){
    //Destructor
}
