// Clase 1 : para almacenar y procesar los datos
#pragma once
#include <vector>
#include <string>
#include <type_traits>

using namespace std;
class JsonData
{
private:
    vector<double> vec_doubles;
    vector<string> palabras;
    vector<vector<int>> listas;

public:
    JsonData() = default;

    // método template para agregar datos según el tipo
    template <typename T>
    void agregar(const T &valor)
    {
        if constexpr (is_same_v<T, double>)
        {
            vec_doubles.push_back(valor);
        }
        else if constexpr (is_same_v<T, string>)
        {
            palabras.push_back(valor);
        }
        else if constexpr (is_same_v<T, vector<int>>)
        {
            listas.push_back(valor);
        }
    }

    // métodos para obtener los datos
    const vector<double> &getVecDoubles() const { return vec_doubles; }
    const vector<string> &getPalabras() const { return palabras; }
    const vector<vector<int>> &getListas() const { return listas; }
};