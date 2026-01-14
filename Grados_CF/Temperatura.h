#ifndef REMPERATURA_H
#define TEMPERATURA_H

class Temperatura{
    private:
        float celsius;
    public:
        Temperatura();
        void setCelsius();
        float getCelsius();
        float conversionAFahrenheit();
        void imprimeFahrenheit();
        virtual ~Temperatura();
};

#endif //TEMPERATURA_H