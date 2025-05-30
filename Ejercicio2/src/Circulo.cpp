#include "../includes/Circulo.hpp"

Circulo::Circulo(const Punto &centro, double radio) : centro(centro), radio(radio) {}

Punto Circulo::getCentro() const { return centro; }
double Circulo::getRadio() const { return radio; }
void Circulo::setCentro(const Punto &centro) { this->centro = centro; }
void Circulo::setRadio(double radio) { this->radio = radio; }