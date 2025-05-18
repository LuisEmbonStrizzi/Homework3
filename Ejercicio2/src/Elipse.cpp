#include "../headers/Elipse.hpp"

Elipse::Elipse(const Punto &centro, double a, double b) : centro(centro), a(a), b(b) {}

Punto Elipse::getCentro() const { return centro; }
double Elipse::getA() const { return a; }
double Elipse::getB() const { return b; }
void Elipse::setCentro(const Punto &centro) { this->centro = centro; }
void Elipse::setA(double a) { this->a = a; }
void Elipse::setB(double b) { this->b = b; }