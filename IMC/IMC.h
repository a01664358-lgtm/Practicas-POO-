#ifndef IMC_H
#define IMC_H

class IMC{
    private:
        float peso;
        float altura;
    public:
        IMC();
        void setPeso();
        void setAltura();
        float getPeso();
        float getAltura();
        float calculaIMC();
        void imprimeIMC();
        virtual ~IMC(); 
};

#endif //IMC_H