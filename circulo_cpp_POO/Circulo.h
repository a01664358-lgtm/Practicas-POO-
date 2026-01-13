#ifndef CIRCULO_H
#define CIRCULO_H

class Circulo{
    private:
        float radio;
        float area;

    public:
        //Constructor
        Circulo();
        //Metodos get
        float getRadio();
        //Metodos set
        void setRadio();
        //Metodo especializado
        float Calcular_Area();
        //Destructor
        virtual ~Circulo();

};

#endif // CIRCULO_H 