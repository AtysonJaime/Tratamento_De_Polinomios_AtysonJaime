#include <iostream>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"
using namespace std;

int main(){
    Retangulo r1(0,0,4,3);
    Point CM;

    cout << "--------------------------------------------------------" << endl;
    cout << "-------- Programa para testar a Classe Retangulo--------"<<endl;
    cout << "------------ Uma subclasse da classe Poligono-----------"<<endl;
    cout << "--------------------------------------------------------" << endl;
    cout << endl << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "Escolhendo previamente os pontos iniciais (0,0), altura 3 e largura 4" << endl;
    cout << endl <<"Teremos a criacao do seguinte Retangulo: " << endl;
    r1.imprimePoligono();
    cout << endl;
    cout << "A area do Retangulo sera: " << r1.areaPoligono() << endl;
    cout << "Transladamos o Retangulo para (-3,4)" << endl;
    r1.transladaPoligono(-3,4);
    cout << "A area do Retangulo sera: " << r1.areaPoligono() << endl;
    r1.imprimePoligono();
    cout << endl << "Como podemos ver, a area sera igual." << endl << endl;

    cout << "----------------------------------------------------------------------" << endl;
    cout << "Rotancionando o Retangulo em 30 graus em torno do seu centro de massa." << endl;
    CM = r1.EncCentroMassaRet(r1);
    cout << "Encontrando o centro de massa, que esta no ponto: ";
    CM.Imprime();
    cout << endl << "Rotancionando o Retuangulo..." << endl;
    r1.rotPoligono(30,CM);
    cout << "Rotacao finalizada, seu Retangulo esta assim agora: " << endl;
    r1.imprimePoligono();
    cout << endl << endl << "Calculando a area: " << r1.areaPoligono() << endl;

     cout << "----------------------------------------------------------------------" << endl;
     cout << "Como podemos ver as tres areas deram iguais, o que era esperado, ja que nao " << endl;
     cout << "mudamos a estrutura do retangulo e so as suas coordenadas" << endl;
     cout << "A area tende a ser a mesma." << endl;

    return 0;
}
