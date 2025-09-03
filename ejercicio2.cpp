#include <iostream>
#include <string>
using namespace std;

// Tipo de dato abstracto
struct persona {
    string nombre;
    string apellido;
};

// Declarar arreglo
int main() {
    persona personas[3] = {
        {"Ana", "López"},
        {"Luis", "García"},
        {"Paola", "Valdez"}
    };

    return 0;
}