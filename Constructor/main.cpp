#include <iostream>
#include "Punto.h"
#include "Vector.h"
using namespace std;

int main()
{
    Vector v;
    v.modificarPuntoFinal(3,4);
    v.imprimir();
    cout << v.calcularModulo() << endl;
    return 0;
}
