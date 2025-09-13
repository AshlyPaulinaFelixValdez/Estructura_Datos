// busqueda lineal

#include <iostream>
using namespace std;

int busquedalineal(int arreglo[], int tamaño, int buscado) {
    for (int i = 0; i < tamaño; i++) {
        if (arregloo[i] == buscado) {
            return i; // posición
        }
    }
    return -1; //no encontrado
}

int main() {
    int numeros[] = {10, 20, 30, 40};
    int tamaño = sizeof(numeros)/sizeof(numeros[0]);

    cout << busquedalineal(numeros, tamaño, 30); // posición 2
    return 0;
}