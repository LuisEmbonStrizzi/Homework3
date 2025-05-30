#pragma once
#include <map>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class JsonBuilder
{
private:
    map<string, vector<double>> doubles_map;
    map<string, vector<string>> strings_map;
    map<string, vector<vector<int>>> listas_map;

public:
    void agregar(const string &etiqueta, const vector<double> &vec)
    {
        doubles_map[etiqueta] = vec;
    }
    void agregar(const string &etiqueta, const vector<string> &vec)
    {
        strings_map[etiqueta] = vec;
    }
    void agregar(const string &etiqueta, const vector<vector<int>> &mat)
    {
        listas_map[etiqueta] = mat;
    }

    void imprimirJSON(ostream &os = cout) const;
};