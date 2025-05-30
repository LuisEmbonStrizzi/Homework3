#include "../includes/JsonBuilder.hpp"
#include "../includes/JsonData.hpp"
#include <vector>
#include <string>

using namespace std;

int main()
{
    JsonData data;
    data.agregar(1.3);
    data.agregar(2.1);
    data.agregar(3.2);
    data.agregar(string("Hola"));
    data.agregar(string("Mundo"));
    data.agregar(vector<int>{1, 2});
    data.agregar(vector<int>{3, 4});

    JsonBuilder builder;
    builder.agregar("vec_doubles", data.getVecDoubles());
    builder.agregar("palabras", data.getPalabras());
    builder.agregar("listas", data.getListas());

    builder.imprimirJSON();

    return 0;
}