#pragma once
#include "MedicionBase.hpp"
#include <iostream>
#include <fstream>

using namespace std;

class Presion : public MedicionBase
{
public:
    float presionEstatica;
    float presionDinamica;

    Presion(float p = 0, float q = 0, float t = 0);
    Presion(const Presion &other);

    void imprimir() const override;
    void serializar(ofstream &out) const override;
    void deserializar(ifstream &in) override;
};