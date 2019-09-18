#include "Punto.h"
#include<iostream>
using namespace std;

Punto::Punto(){
    x=3;
    y=4;
}

Punto::Punto(double nx, double ny){
    x=nx;
    y=ny;
}

void Punto::modificar(double nx, double ny){
    x+=nx;
    y+=ny;
}

void Punto::imprimir(){
    cout << "(" << x << "," << y << ")";
}

