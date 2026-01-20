#ifndef AEROPUERTO_H
#define AEROPUERTO_H
#include <iostream>

class Aeropuerto{
    private:
        int N;
        int indice;
        int pesoNuevo;
        int aviones[50];
    public:
        Aeropuerto();
        void llenarArreglo();
        void calcularVarianza();
        void calcularDesviacionEstandar();
        void consultarAvion();
        void cambiarPeso();
        virtual ~Aeropuerto();
};

#endif //AEROPUERTO_H