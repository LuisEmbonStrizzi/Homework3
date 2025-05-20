#include "../headers/Posicion.hpp"
#include "../headers/Presion.hpp"
#include "../headers/SaveFlightData.hpp"
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    Posicion posicion(-34.6f, -58.4f, 950.0f, 5.3f);
    Presion presion(101.3f, 5.8f, 6.1f);

    SaveFlightData datos(posicion, presion);

    // serializar
    ofstream out("vuelo.dat", ios::binary);
    datos.serializar(out);
    out.close();

    // deserializar
    SaveFlightData datosLeidos{Posicion(), Presion()};
    ifstream in("vuelo.dat", ios::binary);
    datosLeidos.deserializar(in);
    in.close();

    cout << "Datos originales:" << endl;
    datos.imprimir();
    cout << "Datos leidos del archivo:" << endl;
    datosLeidos.imprimir();

    // ejemplo de uso del constructor de copia (deep copy)
    SaveFlightData copiaDatos = datos; // internamente se llama al constructor de
    // copia de SaveFlightData,
    // que a su vez copia sus miembros posicion y presion usando los constructores de deep copy de estos
    cout << "Datos copiados con el constructor de copia:" << endl;
    copiaDatos.imprimir();

    return 0;
}