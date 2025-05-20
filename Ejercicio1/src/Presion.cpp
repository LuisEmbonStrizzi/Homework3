#include "../headers/Presion.hpp"

using namespace std;

Presion::Presion(float p, float q, float t)
    : MedicionBase(t), presionEstatica(p), presionDinamica(q) {}

Presion::Presion(const Presion &other)
    : MedicionBase(*other.tiempoMedicion), presionEstatica(other.presionEstatica), presionDinamica(other.presionDinamica) {}

void Presion::imprimir() const
{
    cout << "Presion estatica: " << presionEstatica
         << ", Presion dinamica: " << presionDinamica
         << ", Tiempo: " << getTiempo() << endl;
}

void Presion::serializar(ofstream &out) const
{
    MedicionBase::serializar(out); // serializa el tiempo usando la base
    out.write(reinterpret_cast<const char *>(&presionEstatica), sizeof(presionEstatica));
    out.write(reinterpret_cast<const char *>(&presionDinamica), sizeof(presionDinamica));
}

void Presion::deserializar(ifstream &in)
{
    MedicionBase::deserializar(in); // deserializa el tiempo usando la base
    in.read(reinterpret_cast<char *>(&presionEstatica), sizeof(presionEstatica));
    in.read(reinterpret_cast<char *>(&presionDinamica), sizeof(presionDinamica));
}