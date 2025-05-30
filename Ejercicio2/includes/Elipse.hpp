#pragma once
#include "Punto.hpp"

class Elipse
{
private:
    Punto centro;
    double a, b;

public:
    Elipse(const Punto &centro, double a, double b);
    Punto getCentro() const;
    double getA() const;
    double getB() const;
    void setCentro(const Punto &centro);
    void setA(double a);
    void setB(double b);
};