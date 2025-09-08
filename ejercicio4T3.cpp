// insertar a la derecha

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros = {10, 20, 30};
    numeros.push_back(40); // inserta al final

    for (int n : numeros) {
        cout << n << " ";
    }
    return 0;
}