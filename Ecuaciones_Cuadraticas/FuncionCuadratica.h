#ifndef FUNCIONCUADRATICA_H
#define FUNCIONCUADRATICA_H

class FuncionCuadratica{
    private:
        float A;
        float B;
        float C;
    public:
        //Costructor
        FuncionCuadratica();
        //Setters
        void setABC();
        //Getters
        float getA();
        float getB();
        float getC();
        //Funciones especiales
        float solucion1();
        float solucion2();
        void imprimirSoluciones();
        virtual ~FuncionCuadratica();
};

#endif //FUNCIONCUADRATICA_H