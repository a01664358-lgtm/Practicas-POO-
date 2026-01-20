#include "Aeropuerto.cpp"
#include <iostream>
#include <cmath>
#include <cstdlib> 
using namespace std;

int main(){
    Aeropuerto A;
    A.llenarArreglo();
    int opcion = 0, opcion2 = 0;
    do{
        cout<<"Bienvenido al menú del aeropuerto"<<endl;
        cout<<"Opciones:"<<endl<<"<1> Consultar dispersiones"<<endl<<"<2> Consultar avión"<<endl<<"<3> Cambiar peso"<<endl<<"<4> salir"<<endl;
        cin>>opcion;
        switch (opcion){
        case 1:
            do{
                cout<<"<1> Varianza"<<endl<<"<2> Desviación estandar"<<endl;
                cin>>opcion2;
                switch (opcion2){
                case 1:
                    A.calcularVarianza();
                    break;
                case 2:
                    A.calcularDesviacionEstandar();
                    break;
                
                default:
                    cout<<"Intenta de nuevo"<<endl;
                    break;
                }
            }while(opcion2 != 1 && opcion2 != 2);
            break;
        case 2:
            A.consultarAvion();
            break;
        case 3:
            A.cambiarPeso();
            break;
        case 4:
            cout<<"Hasta luego"<<endl;
        default:
            cout<<"Intentalo de nuevo"<<endl;
            break;
        }
    }while(opcion != 4);
}