#include "../headers/Punto.hpp"

Punto::Punto(double x, double y) : x(x), y(y) {}

double Punto::getX() const { return x; }
double Punto::getY() const { return y; }
void Punto::setX(double x) { this->x = x; }
void Punto::setY(double y) { this->y = y; }