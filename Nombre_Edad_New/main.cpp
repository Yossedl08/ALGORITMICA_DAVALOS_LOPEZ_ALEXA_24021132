#include <iostream>

using namespace std;

int main()
{
    string nombre;
    int edad;

    cout << "Introduce tu nombre: ";
    cin >> nombre;
    cout << "Introduce tu edad: ";
    cin >> edad;

    cout << "Hola " << nombre << " " << "tienes " << edad << " años." << endl;
    return 0;
}
