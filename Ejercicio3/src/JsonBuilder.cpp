#include "../headers/JsonBuilder.hpp"

using namespace std;

void JsonBuilder::imprimirJSON(ostream &os) const
{
    os << "{\n";

    // imprimir doubles_map
    for (auto it = doubles_map.begin(); it != doubles_map.end(); ++it)
    {
        os << " \"" << it->first << "\" : [";
        for (size_t i = 0; i < it->second.size(); ++i)
        {
            os << it->second[i];
            if (i + 1 < it->second.size())
                os << ", ";
        }
        os << "]";
        if (next(it) != doubles_map.end() || !strings_map.empty() || !listas_map.empty())
            os << ",";
        os << "\n";
    }

    // imprimir strings_map
    for (auto it = strings_map.begin(); it != strings_map.end(); ++it)
    {
        os << " \"" << it->first << "\" : [";
        for (size_t i = 0; i < it->second.size(); ++i)
        {
            os << "\"" << it->second[i] << "\"";
            if (i + 1 < it->second.size())
                os << ", ";
        }
        os << "]";
        if (next(it) != strings_map.end() || !listas_map.empty())
            os << ",";
        os << "\n";
    }

    // imprimir listas_map
    for (auto it = listas_map.begin(); it != listas_map.end(); ++it)
    {
        os << " \"" << it->first << "\" : [\n";
        for (size_t i = 0; i < it->second.size(); ++i)
        {
            os << "  [";
            for (size_t j = 0; j < it->second[i].size(); ++j)
            {
                os << it->second[i][j];
                if (j + 1 < it->second[i].size())
                    os << ", ";
            }
            os << "]";
            if (i + 1 < it->second.size())
                os << ",";
            os << "\n";
        }
        os << " ]\n";
    }

    os << "}\n";
}