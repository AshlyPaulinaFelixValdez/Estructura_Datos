#include <iostream>
#include <cctype> // para usar toupper

using namespace std;

int main() {
    char orientacionJ1;
    char orientacionJ2;

    cout << "--- BATALLA NAVAL ---" << endl;

    cout << "\nCada jugador debe elegir cómo acomodar los barcos." << endl;
    cout << "Se puede elegir: Horizontal (H) o Vertical (V)" << endl;

    // Jugador 1
    while (true) {
        cout << "\n(Jugador 1) Elige la orientación de tus barcos (H/V): " << endl;
        cin >> orientacionJ1;
        orientacionJ1 = toupper(orientacionJ1); // convertir a mayúscula

        if (orientacionJ1 == 'H') {
            cout << "(Jugador 1) Has elegido orientación horizontal (H)" << endl;
            break;
        }
        else if (orientacionJ1 == 'V') {
            cout << "(Jugador 1) Has elegido orientación vertical (V)" << endl;
            break;
        }
        else {
            cout << "Opción inválida." << endl;
        }
    }

    // jugador 2
    while (true) {
        cout << "\n(Jugador 2) Elige la orientación de tus barcos (H/V): ";
        cin >> orientacionJ2;
        orientacionJ2 = toupper(orientacionJ2); // convertir a mayúscula

        if (orientacionJ2 == 'H') {
            cout << "(Jugador 2) Has elegido orientación horizontal(H)" << endl;
            break;
        }
        else if (orientacionJ2 == 'V') {
            cout << "(Jugador 2) Has elegido orientacion vertical (V)" << endl;
            break;
        }
        else {
            cout << "Opción inválida." << endl;
        }
    }
    cout << "\nListo! Ambos ya configuraron la orientación de sus barcos" << endl;
    cout << "Ahora colocaran sus barcos en el tablero" << endl;

    return 0;
}