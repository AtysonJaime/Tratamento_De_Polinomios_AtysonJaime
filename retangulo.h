#ifndef RETANGULO_H
#define RETANGULO_H

#include "poligono.h"
/**
 * @brief The Retangulo class é uma subclasse da Class Poligono
 */
class Retangulo: public Poligono{
private:
    float largura,altura;
public:
    /**
     * @brief Retangulo é o Construtor da Classe Retangulo
     * @param x paramentro da coordenada x do ponto da posição superior esquerda
     * @param y paramentro da coordenada y do ponto da posição superior esquerda
     * @param largura é a largura do Retangulo
     * @param altura é a altura do Retangulo
     */
    Retangulo(float x, float y, float largura, float altura);
    /**
     * @brief EncCentroMassaRet é a função que encontra o centro de massa do retangulo.
     * @return Retorna o ponto onde se encontra o centro de massa.
     */
    Point EncCentroMassaRet(Retangulo &mr);
};

#endif // RETANGULO_H
