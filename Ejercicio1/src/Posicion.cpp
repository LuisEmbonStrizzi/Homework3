#include "../headers/Posicion.hpp"

using namespace std;

Posicion::Posicion(float lat, float lon, float alt, float t)
    : MedicionBase(t), latitud(lat), longitud(lon), altitud(alt) {}

Posicion::Posicion(const Posicion &other)
    : MedicionBase(*other.tiempoMedicion), latitud(other.latitud), longitud(other.longitud), altitud(other.altitud) {}

void Posicion::imprimir() const
{
    cout << "Latitud: " << latitud
         << ", Longitud: " << longitud
         << ", Altitud: " << altitud
         << ", Tiempo: " << getTiempo() << endl;
}

void Posicion::serializar(ofstream &out) const
{
    MedicionBase::serializar(out); // serializa el tiempo primero
    out.write(reinterpret_cast<const char *>(&latitud), sizeof(latitud));
    out.write(reinterpret_cast<const char *>(&longitud), sizeof(longitud));
    out.write(reinterpret_cast<const char *>(&altitud), sizeof(altitud));
}

void Posicion::deserializar(ifstream &in)
{
    MedicionBase::deserializar(in); // deserializa el tiempo primero
    in.read(reinterpret_cast<char *>(&latitud), sizeof(latitud));
    in.read(reinterpret_cast<char *>(&longitud), sizeof(longitud));
    in.read(reinterpret_cast<char *>(&altitud), sizeof(altitud));
}