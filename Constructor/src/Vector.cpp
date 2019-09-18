#include "Vector.h"
#include <cmath>
#include <iostream>
using namespace std;


Vector::Vector()
{
    //ctor
}

double Vector::calcularModulo(){
    return sqrt((fin.x-inicial.x)*(fin.x-inicial.x)+(fin.y-inicial.y)*(fin.y-inicial.y));
}


void Vector::modificarPuntoInicial(double nx,double ny){
    inicial.modificar(nx,ny);
}

void Vector::modificarPuntoFinal(double nx,double ny){
    fin.modificar(nx,ny);

}

void Vector::imprimir(){
    inicial.imprimir();
    cout << " -->";
    fin.imprimir();
}
