#include "../includes/Rectangulo.hpp"

Rectangulo::Rectangulo(const Punto &vertice, double ancho, double largo)
    : verticeInferiorIzquierdo(vertice), ancho(ancho), largo(largo) {}

Punto Rectangulo::getVerticeInferiorIzquierdo() const { return verticeInferiorIzquierdo; }
double Rectangulo::getAncho() const { return ancho; }
double Rectangulo::getLargo() const { return largo; }
void Rectangulo::setVerticeInferiorIzquierdo(const Punto &vertice) { this->verticeInferiorIzquierdo = vertice; }
void Rectangulo::setAncho(double ancho) { this->ancho = ancho; }
void Rectangulo::setLargo(double largo) { this->largo = largo; }