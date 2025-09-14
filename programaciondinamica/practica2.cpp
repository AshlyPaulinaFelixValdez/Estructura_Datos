#include <iostream> 
#include <cctype>
using namespace std;

int main() {
    int opcion;
    std::cout << "=== Menu de opciones ===" << endl;
    std::cout << "1. Determinar si un numero es par o impar" << endl;
    std::cout << "2. Mostrar dia de la semana (1-7)" << endl;
    std::cout << "3. Mostrar mes del año (1-12)" << endl;
    std::cout << "4. Determinar si un numero es positivo o negativo" << endl;
    std::cout << "5. Determinar si un numero es mayor a 100" << endl;
    std::cout << "6. Determinar si una letra es vocal" << endl;
    std::cout << "7. Verificar si el tercer numero es la suma de los dos primeros" << endl;
    std::cout << "8. Verificar si el tercer numero es el producto de los dos primeros" << endl;
    std::cout << "Elige una opcion: ";
    std::cin >> opcion;

    switch(opcion) {
        case 1: {
            int num;
            cout << "Ingresa un numero: ";
            cin >> num;
            if (num % 2 == 0)
                cout << "El numero es par." << endl;
            else
                cout << "El numero es impar." << endl;
            break;
        }
        case 2: {
            int dia;
            cout << "Ingresa un numero del 1 al 7: ";
            cin >> dia;
            switch(dia) {
                case 1: cout << "Lunes."; break;
                case 2: cout << "Martes."; break;
                case 3: cout << "Miercoles."; break;
                case 4: cout << "Jueves."; break;
                case 5: cout << "Viernes."; break;
                case 6: cout << "Sabado."; break;
                case 7: cout << "Domingo."; break;
                default: cout << "Numero invalido.";
            }
            cout << endl;
            break;
        }
        case 3: {
            int mes;
            cout << "Ingresa un numero del 1 al 12: ";
            cin >> mes;
            switch(mes) {
                case 1: cout << "Enero."; break;
                case 2: cout << "Febrero."; break;
                case 3: cout << "Marzo."; break;
                case 4: cout << "Abril."; break;
                case 5: cout << "Mayo."; break;
                case 6: cout << "Junio."; break;
                case 7: cout << "Julio."; break;
                case 8: cout << "Agosto."; break;
                case 9: cout << "Septiembre."; break;
                case 10: cout << "Octubre."; break;
                case 11: cout << "Noviembre."; break;
                case 12: cout << "Diciembre."; break;
                default: cout << "Numero invalido.";
            }
            cout << endl;
            break;
        }
        case 4: {
            int num;
            cout << "Ingresa un numero: ";
            cin >> num;
            if (num > 0)
                cout << "El numero es poditivo. " << endl;
            else if (num < 0)
                cout << "El numero es negativo." << endl;
            else
                cout << "El numero es cero." << endl;
            break;
        }
        case 5: {
            int num;
            cout << "Ingresa un numero: ";
            cin >> num;
            if (num > 100)
                cout << "El numero es mayor a 100." << endl;
            else
                cout << "El numero no es mayor a 100." << endl;
            break;
        }
        case 6: {
            char letra;
            cout << "Ingresa una letra: ";
            cin >> letra;
            letra = tolower(letra);
            if (letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u')
                cout << "Es una vocal." << endl;
            else
                cout << "No es una vocal." << endl;
            break;
        }
        case 7: {
            int a, b, c;
            cout << "Ingresa tres numeros: ";
            cin >> a >> b >> c;
            if (c == a + b)
                cout << "El tercer numero es igual a la suma de los dos primeros." << endl;
            else
                cout << "El tercer numero no es igual a la suma de los dos primeros." << endl;
            break;
        }
        case 8: {
            int a, b, c;
            cout << "Ingresa tres numeros: ";
            cin >> a >> b >> c;
            if (c == a * b)
                cout << "El tercer numero es igual a la multiplicacion de los dos primeros." << endl;
            else
                cout << "El tercer numero no es igual a la multiplicacion de los dos primeros." << endl;
            break;
        }
        default:
            cout << "Error: opcion invalida." << endl;
    }

    return 0;
}