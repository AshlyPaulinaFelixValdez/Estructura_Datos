// recorrido de arreglo
#include <iostream>
using namespace std;

int main() {
    int numeros[] = {10, 20, 30, 40};
    int tamaño = sizeof(numeros)/sizeof(numeros[0]);

    // for normal
    for (int i = 0; i < tamaño; i++) {
        cout << numeros[i] << endl;
    }

    // range-based for (c++11 en adelante)
    for (int n : numeros) {
        cout << n << endl;
    }

    return 0;
}