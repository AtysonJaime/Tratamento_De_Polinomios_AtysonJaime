#include "retangulo.h"
#include <iostream>

using namespace std;

Retangulo::Retangulo(float x, float y, float _largura, float _altura){
    largura = _largura;
    altura = _altura;
    insereVertice(x,y);
    insereVertice(x,(y-altura));
    insereVertice((x+largura),(y-altura));
    insereVertice((x+largura),(y+altura));
}

Point Retangulo::EncCentroMassaRet(Retangulo &mr){
    Point aux;
    float lag,alt;
    alt =(mr.p[0].getY() - mr.p[1].getY());
    lag = (mr.p[1].getX() - mr.p[2].getX());
    aux.setXY((lag/2),(alt/2));
    return aux;
}
