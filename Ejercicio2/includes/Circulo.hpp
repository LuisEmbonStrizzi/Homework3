#pragma once
#include "Punto.hpp"

class Circulo
{
private:
    Punto centro;
    double radio;

public:
    Circulo(const Punto &centro, double radio);
    Punto getCentro() const;
    double getRadio() const;
    void setCentro(const Punto &centro);
    void setRadio(double radio);
};