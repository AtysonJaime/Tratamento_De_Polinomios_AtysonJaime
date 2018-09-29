#include <iostream>
#include "point.h"
using namespace std;

int main()
{
    Point p1,p2,p3, p4(3,-4);

    p1.setX(8.5);
    p1.setY(3.76);
    p2.setXY(2.2,0.0);
    cout << "Coordenada x do Ponto: " << p1.getX() << endl;
    cout << "Coordenada y do Ponto: " << p1.getY() << endl;
    p1.Imprime();

    p2.Imprime();

    p3 = p1.add(p2);
    cout << "Coordenadas de p1 somadas com p2: ";
    p3.Imprime();
    p3 = p2.sub(p1);
    cout << endl << "coordenadas de p2 subtraidas de p1: ";
    p3.Imprime();
    p4.Imprime();
    cout << "A norma do ponto 4 eh: " << p4.norma() << endl;

    p2.translada(2.8,5);
    cout << "ponto 2 transladado em (2.8,5)" << endl;
    p2.Imprime();
    return 0;
}
