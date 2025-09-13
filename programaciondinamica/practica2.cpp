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
}