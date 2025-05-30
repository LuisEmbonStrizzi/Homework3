#pragma once
#include "Circulo.hpp"
#include "Elipse.hpp"
#include "Rectangulo.hpp"
#include <cmath>

// declaracion generica
template <typename T>
class ProcesadorFigura;

// especializacion para circulo
template <>
class ProcesadorFigura<Circulo>
{
public:
    static double calcularArea(const Circulo &circulo)
    {
        return M_PI * circulo.getRadio() * circulo.getRadio();
    }
};

// especializacion para elipse
template <>
class ProcesadorFigura<Elipse>
{
public:
    static double calcularArea(const Elipse &elipse)
    {
        return M_PI * elipse.getA() * elipse.getB();
    }
};

// especializacion para rectangulo
template <>
class ProcesadorFigura<Rectangulo>
{
public:
    static double calcularArea(const Rectangulo &rectangulo)
    {
        return rectangulo.getAncho() * rectangulo.getLargo();
    }
};