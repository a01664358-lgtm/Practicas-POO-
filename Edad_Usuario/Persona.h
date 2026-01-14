#ifndef PERSONA_H
#define PERSONA_H

class Persona
{
private:
    int edad;
public:
    //Construtor
    Persona();
    //Setters
    void setEdad();
    //Getters
    int getEdad();
    //Funciones especiales
    int edadMercurio();
    int edadVenus();
    int edadJupiter();
    int edadSaturno();
    void imprimirEdades();
    //Destructor
    virtual ~Persona();
};

#endif //PERSONA_H

