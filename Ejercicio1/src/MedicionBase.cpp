#include "../headers/MedicionBase.hpp"

using namespace std;

MedicionBase::MedicionBase(float tiempo)
    : tiempoMedicion(make_unique<float>(tiempo)) {}

float MedicionBase::getTiempo() const
{
    return *tiempoMedicion;
}

void MedicionBase::serializar(ofstream &out) const
{
    float t = getTiempo();
    out.write(reinterpret_cast<const char *>(&t), sizeof(t));
}

void MedicionBase::deserializar(ifstream &in)
{
    float t;
    in.read(reinterpret_cast<char *>(&t), sizeof(t));
    tiempoMedicion = make_unique<float>(t);
}