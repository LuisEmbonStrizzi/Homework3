#include "../headers/SaveFlightData.hpp"

using namespace std;

SaveFlightData::SaveFlightData(const Posicion &p, const Presion &q)
    : posicion(p), presion(q) {}

SaveFlightData::SaveFlightData(const SaveFlightData &other)
    : posicion(other.posicion), presion(other.presion) {}

void SaveFlightData::serializar(ofstream &out) const
{
    posicion.serializar(out);
    presion.serializar(out);
}

void SaveFlightData::deserializar(ifstream &in)
{
    posicion.deserializar(in);
    presion.deserializar(in);
}

void SaveFlightData::imprimir() const
{
    cout << "Datos de vuelo:" << endl;
    posicion.imprimir();
    presion.imprimir();
}