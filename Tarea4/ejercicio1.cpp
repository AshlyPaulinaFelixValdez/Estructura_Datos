// recorrido de arreglo por columnas

#include <iostream>
using namespace std;

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int filas = 3, columnas = 3;

    for (int j = 0; j < columnas; j++) {
        for (int i = 0; i < filas; i++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return o;
}