#include <iostream>
#include "../headers/Punto.hpp"
#include "../headers/Circulo.hpp"
#include "../headers/Elipse.hpp"
#include "../headers/Rectangulo.hpp"
#include "../headers/ProcesadorFigura.hpp"
using namespace std;
int main()
{
    Punto p(1, 2);
    Circulo c(p, 5);
    Elipse e(p, 4, 2);
    Rectangulo r(p, 3, 6);

    cout << "Area del circulo: " << ProcesadorFigura<Circulo>::calcularArea(c) << endl;
    cout << "Area de la elipse: " << ProcesadorFigura<Elipse>::calcularArea(e) << endl;
    cout << "Area del rectangulo: " << ProcesadorFigura<Rectangulo>::calcularArea(r) << endl;

    return 0;
}