#ifndef POINT_H
#define POINT_H

/**
 * @brief The Point class é usada para criar Pontos em um Plano Bidimensional
 */
class Point{
private:
        float x;
        float y;
public:
     /**
     * @brief Point é o Contrutor com Argumentos da Classe.
     * @param mx Paramentro para a Coordenada X
     * @param my Paramentro para a Coordenada Y
     */
    Point(float mx=0.0, float my=0.0);
    ~Point();
    /**
     * @brief Point é o Construtor de Copia
     * @param p é o Ponto que sera copiado
     */
    Point(const Point &p);
    /**
     * @brief setX Função que define a coordenada X;
     * @param mx Parametro passado para a função SetX;
     */
    void setX(float mx);
    /**
     * @brief setY Função que define a coordenada Y;
     * @param my Paramentro passado para a função SetX;
     */
    void setY(float my);
    /**
     * @brief setXY, Define em uma mesma função, as coordenadas X e Y;
     * @param mx Paramentro da coordenada x passado para a função SetXY;
     * @param my Paramentro da coordenada y passada para a função SetXY;
     */
    void setXY(float mx, float my);
    /**
     * @brief getX Recupera a coordenada X do Ponto;
     * @return Valor da Coordenada X;
     */
    float getX(void);
    /**
     * @brief getY Recupera a coordenada Y do Ponto;
     * @return Valor da Coordenada y;
     */
    float getY(void);
    /**
     * @brief add é uma função que adiciona as coordenadas (x,y) do ponto com as coordenadas de um ponto P1(x1,y1) fornecido, armazenando o resultado nas coordenadas de um novo ponto.
     * @param p1 é o ponto passado como parametro.
     * @return a função retorna um ponto com as coordendas (x + p1.x, y + p1.y);
     */
    Point add(Point p1);
    /**
     * @brief sub é uma função que subtrai as coordenadas (x,y) do ponto com as coordenadas de um ponto P1(x1,y1) fornecido, armazenando o resultado nas coordenadas de um novo ponto.
     * @param p1 é o ponto passado como parametro.
     * @return a função retorna um ponto com as coordendas (x - p1.x, y - p1.y);
     */
    Point sub(Point p1);

    /**
     * @brief norma Calcula a distância do ponto a origem de coordenadas.
     * @return retorna a distância.
     */
    float norma(void);
    /**
     * @brief translada Translada o ponto (x,y) de (+a,+b), de modo que, após a execução do método, as coordenadas do ponto serão (x+a,y+b).
     * @param a paramentro para transladar a coordenada x.
     * @param b paramentro para transladar a coordenada y.
     */
    void translada(float a, float b);

    /**
     * @brief Imprime, Função que monstra na tela o ponto na forma (xpos,ypos);
     */
    void Imprime();
};

#endif // POINT_H
