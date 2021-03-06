#include "point.h"
#include <iostream>
#include <cmath>

using namespace std;

#define pi 3.1415

Point::Point(float mx, float my){
   x = mx;
   y = my;
}

Point::~Point(){}

Point::Point(const Point &p){
   x = p.x;
   y = p.y;
}

void Point::setX(float mx){
   x = mx;
}

void Point::setY(float my){
    y = my;
}

void Point::setXY(float mx, float my){
    x = mx;
    y = my;
}

float Point::getX(){
    return x;
}

float Point::getY(){
    return y;
}

Point Point::add(Point p1){
    Point ret;

    ret.x = (x + p1.x);
    ret.y = (y + p1.y);

    return ret;
}
Point Point::sub(Point p1){
    Point ret;

    ret.x = (x - p1.x);
    ret.y = (y - p1.y);

    return ret;
}

float Point::norma()
{
    float ret;
    ret = sqrt((x*x) + (y*y));
    return ret;
}

void Point::translada(float a, float b)
{
    x = x + a;
    y = y + b;
}

void Point::Imprime(){
    cout << "(" << x << ", " << y <<")";
}

void Point::Rot(float ang){
    float auxX=0, auxY=0;
    auxX = (x*cos((ang * pi)/180.0)) - (y*sin((ang*pi)/180.0));
    auxY = (x*sin((ang*pi)/180.0)) + (y*cos((ang * pi)/180.0));
    x = auxX;
    y = auxY;

}
