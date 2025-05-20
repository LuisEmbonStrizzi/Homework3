#pragma once
#include "MedicionBase.hpp"
#include <iostream>
#include <fstream>

using namespace std;

class Posicion : public MedicionBase
{
private:
    float latitud;
    float longitud;
    float altitud;

public:
    Posicion(float lat = 0, float lon = 0, float alt = 0, float t = 0);
    Posicion(const Posicion &other);

    void imprimir() const override;
    void serializar(ofstream &out) const override;
    void deserializar(ifstream &in) override;
};