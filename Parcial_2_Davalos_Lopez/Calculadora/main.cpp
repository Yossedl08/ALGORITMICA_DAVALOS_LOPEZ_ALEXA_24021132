#include <iostream>
using namespace std;

int main() {
    float num1, num2, tot;
    char opcion;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Selecciona una operacion:\n";
    cout << "S - Suma\n";
    cout << "R - Resta\n";
    cout << "M - Multiplicacion\n";
    cout << "D - Division\n";
    cout << "Ingresa tu opcion (S/R/M/D): ";
    cin >> opcion;

    if (opcion == 'S' || opcion == 's') {
        tot = num1 + num2;
        cout << "\nEl resultado de la suma es: " << tot;
    }
    else if (opcion == 'R' || opcion == 'r') {
        tot = num1 - num2;
        cout << "\nEl resultado de la resta es: " << tot;
    }
    else if (opcion == 'M' || opcion == 'm') {
        tot = num1 * num2;
        cout << "\nEl resultado de la multiplicacion es: " << tot;
    }
    else if (opcion == 'D' || opcion == 'd') {
        if (num2 != 0) {
            tot = num1 / num2;
            cout << "\nEl resultado de la division es: " << tot;
        } else {
            cout << "\nError: No se puede dividir entre cero.";
        }
    }
    else {
        cout << "\nOpcion no valida.";
    }

    return 0;
}


