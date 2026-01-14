#ifndef INTERESCOMPUESTO_H
#define INTERESCOMPUESTO_H

class InteresCompuesto{
    private:
        float dinero;
        float tasaInteres;
        int años;
    public:
        //Constructor
        InteresCompuesto();
        //Setters
        void setDinero();
        void setTasaInteres();
        void setAños();
        //Getters
        float getDinero();
        float getTasaInteres();
        int getAños();
        //Metodos especiales
        float Interes();
        void imprimirInteres();
        virtual ~InteresCompuesto();
};

#endif //INTERESCOMPUESTO_H