#include "poligono.h"
#include <iostream>
#include <cmath>

using namespace std;

Poligono::Poligono(){
    N = 0;
}

Poligono::~Poligono(){}

void Poligono::insereVertice(float mx, float my){
    if(N < 100){
        p[N].setXY(mx,my);
        N++;
    }
}

void Poligono::imprimePoligono(){
    int i;
    for(i=0;i<N;i++){
        p[i].Imprime();
        if(i < (N-1)){
            cout << " -> ";
        }
    }
}

float Poligono::recVertice(){
    return N;
}

float Poligono::areaPoligono(){
    int i;
    float Sx=0.0, Sy=0.0;

    for(i=0;i<N;i++){
        if(i < (N-1)){
            Sx = Sx + ((p[i].getX())*p[i+1].getY());
            Sy = Sy + ((p[i].getY())*p[i+1].getX());
        }
        else {
            Sx = Sx + ((p[i].getX())*p[0].getY());
            Sy = Sy + ((p[i].getY())*p[0].getX());
        }
    }
    return (Sx-Sy)/2;
}

void Poligono::transladaPoligono(float a, float b){
    int i;
    for(i =0; i<N;i++){
        p[i].translada(a,b);
    }
}

void Poligono::rotPoligono(float ang, Point p1){
    int i;
    transladaPoligono(-p1.getX(), -p1.getY());
    for(i=0; i<N;i++){
        p[i].Rot(ang);
    }
    transladaPoligono(p1.getX(), p1.getY());
}

