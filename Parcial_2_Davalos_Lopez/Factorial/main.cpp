#include <iostream>
using namespace std;

int main() {

    int op;
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Calcular el factorial y mostrar la tabla de multiplicar\n";
        cout << "2. Salir\n";
        cout << "Elija una opcion: ";
        cin >> op;

        switch (op) {
            case 1: {
                int numero;


                do {
                    cout << "Ingrese un número entero: ";
                    cin >> numero;
                    if (numero < 0) {
                        cout << "Error: el número debe ser entero.\n";
                    }
                } while (numero < 0);


                int factorial = 1;
                for (int i = 1; i <= numero; i++) {
                    factorial *= i;
                }
                cout << "El factorial de " << numero << " es: " << factorial << endl;


                cout << "Tabla de multiplicar del " << numero << ":\n";
                for (int i = 1; i <= 10; i++) {
                    cout << numero << " * " << i << " = " << numero * i << endl;
                }
                break;
            }
            case 2:
                cout << "Saliste\n";
                return 0;
            default:
                cout << "Opcion no valida. Intente de nuevo.\n";
        }
    }

    return 0;
}
