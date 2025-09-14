#include <iostream>
#include "funciones.h"
using namespace std;

int main() {
    int opcion;

    do {
        cout << "MENU DE EJERCICIOS\n";
        cout << "1. Ejercicio 1\n";
        cout << "2. Ejercicio 2\n";
        cout << "3. Ejercicio 3\n";
        cout << "4. Ejercicio 4\n";
        cout << "5. Ejercicio 5\n";
        cout << "6. Ejercicio 6\n";
        cout << "0. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: ejercicio1(); break;
            case 2: ejercicio2(); break;
            case 3: ejercicio3(); break;
            case 4: ejercicio4(); break;
            case 5: ejercicio5(); break;
            case 6: ejercicio6(); break;
            case 0: cout << "Saliendo...\n"; break;
            default: cout << "Opcion invalida\n"; break;
        }
    } while (opcion != 0);

    return 0;
}
