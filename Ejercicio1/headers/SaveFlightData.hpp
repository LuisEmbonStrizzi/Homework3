#pragma once
#include "Posicion.hpp"
#include "Presion.hpp"
#include <fstream>
#include <iostream>

using namespace std;

class SaveFlightData
{
public:
    Posicion posicion;
    Presion presion;

    SaveFlightData(const Posicion &p, const Presion &q);
    SaveFlightData(const SaveFlightData &other);

    void serializar(ofstream &out) const;
    void deserializar(ifstream &in);
    void imprimir() const;
};