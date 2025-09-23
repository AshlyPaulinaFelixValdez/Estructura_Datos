#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    const int n = 10;
    int arr[n];

    // generar nums aleatorios
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
    }

    cout << "Números random: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // ordenamiento de selección
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }

    cout << "Números random ordenados: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}