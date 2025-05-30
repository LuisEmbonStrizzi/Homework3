#include <iostream>
#include "../includes/Punto.hpp"
#include "../includes/Circulo.hpp"
#include "../includes/Elipse.hpp"
#include "../includes/Rectangulo.hpp"
#include "../includes/ProcesadorFigura.hpp"
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