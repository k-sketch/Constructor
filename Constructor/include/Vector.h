#ifndef VECTOR_H
#define VECTOR_H
#include "Punto.h"

class Vector{
public:
    Punto inicial, fin;
    Vector();
    void modificarPuntoInicial(double nx,double ny);
    void modificarPuntoFinal(double nx,double ny);
    void imprimir();
    double calcularModulo();
};


#endif // VECTOR_H
