#pragma once
#include <memory>
#include "IMediciones.hpp"

using namespace std;

class MedicionBase : public IMediciones
{
protected:
    unique_ptr<float> tiempoMedicion;

public:
    MedicionBase(float tiempo = 0.0f);
    float getTiempo() const;
    virtual void imprimir() const = 0;
    void serializar(ofstream &out) const override;
    void deserializar(ifstream &in) override;
};