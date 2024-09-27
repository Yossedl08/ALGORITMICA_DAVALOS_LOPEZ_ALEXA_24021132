#include <iostream>

using namespace std;


int main()
{

float prom;

    cout << "Ingrese Calificacion: " << endl;

    cin >> prom;

    if(prom>6){
        cout << "Aprobado." << endl;
    }
    else{
        cout << "Reprobado." << endl;
    }
    return 0;
}
