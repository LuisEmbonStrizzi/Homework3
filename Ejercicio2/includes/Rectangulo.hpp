#pragma once
#include "Punto.hpp"

class Rectangulo
{
private:
    Punto verticeInferiorIzquierdo;
    double ancho, largo;

public:
    Rectangulo(const Punto &vertice, double ancho, double largo);
    Punto getVerticeInferiorIzquierdo() const;
    double getAncho() const;
    double getLargo() const;
    void setVerticeInferiorIzquierdo(const Punto &vertice);
    void setAncho(double ancho);
    void setLargo(double largo);
};