#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "¿Cuántos números ingresará? ";
    cin >> n;

    int arr[n];
    cout << "Ingresa los números:\n";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "Ordenado: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}