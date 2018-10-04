#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

/**
 * @brief The Poligono class é usado para representar polígonos convexos
 */
class Poligono{
protected:
    Point p[100];
    int N;
public:
    /**
    * @brief Poligono é o Construtor da classe Poligono.
    */
   Poligono();
   ~Poligono();
   /**
    * @brief insereVertice é a função que insere os Vertices do Poligono
    * @param mx Parametro para a coordenada X do ponto.
    * @param my Paramentro para a coordenada y do ponto.
    */
   void insereVertice(float mx, float my);
   /**
    * @brief imprimePoligono é a função que imprime todos os pontos do poligono.
    */
   void imprimePoligono();
   /**
    * @brief recVertice é a função que recupera a quantidade de Vertices no Poligono
    * @return retorna o numero de vertices.
    */
   float recVertice();
   /**
    * @brief areaPoligono é a Função que calcula a Área do Poligono.
    * @return retorna a área do poligono.
    */
   float areaPoligono();
   /**
    * @brief transladaPoligono é a Função que translada os pontos do poligono para (x+a) e (y+b)
    * @param a parametro para transladar a coordenada x dos pontos.
    * @param b parametro para transladar a coordenada y dos pontos.
    */
   void transladaPoligono(float a, float b);

   /**
    * @brief rotPoligono é a função que rotaciona o poligono em θ graus no sentido anti-horário em torno de um ponto (x0,y0) fornecido pelo usuário.
    * @param ang é o paramentro do angulo
    * @param p1 é o ponto passado pelo usuario.
    */
   void rotPoligono(float ang, Point p1);
};
#endif // POLIGONO_H
