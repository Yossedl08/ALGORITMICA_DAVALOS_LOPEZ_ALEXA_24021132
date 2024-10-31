#include <iostream>

using namespace std;

int main()
{
    int Op, Oc;

    cout << "Menu:" << endl;
    cout << "1. Hamburguesa Sencilla" << endl;
    cout << "2. Hamburguesa Doble" << endl;
    cout << "¿Que va a ordenar? (1 o 2): " << endl;
    cin >> Oc;

    switch (Oc) {
        case 1:
            cout << "Orden: Hamburguesa sencilla" << endl;
            break;
        case 2:
            cout << "Orden: Hamburguesa Doble" << endl;
            break;
        default:
            cout << "Selecciona entre 1 y 2" << endl;
            return 1;
    }

    cout << "¿Cual sera tu forma de pago?" << endl;
    cout << "1. Efectivo" << endl;
    cout << "2. Tarjeta" << endl;
    cin >> Op;

    switch (Op) {
        case 1:
            cout << "Va a pagar con efectivo" << endl;
            break;
        case 2:
            cout << "Va a pagar con Tarjeta" << endl;
            break;
        default:
            cout << "Selecciona entre 1 y 2" << endl;
            return 1; // Salir si la selección es inválida
    }

    // Mostrar la orden y el método de pago
    cout << "Perfecto, su orden es una: ";
    switch (Oc) {
        case 1:
            cout << "Hamburguesa sencilla" << endl;
            break;
        case 2:
            cout << "Hamburguesa doble" << endl;
            break;
    }

    cout << "Y su pago sera con: ";
    switch (Op) {
        case 1:
            cout << "Efectivo" << endl;
            break;
        case 2:
            cout << "Tarjeta" << endl;
            break;
    }

    return 0;
}
