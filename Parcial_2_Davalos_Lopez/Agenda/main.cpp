#include <iostream>

using namespace std;

int main()
{
    char materia[20], fecha[50], hora[20], sino, materias[20], nproyecto[20], notaOpcion, fechae[20], tarea[100];

    cout << "Materia: ";
    cin >> materia;

    cout << "Fecha: ";
    cin >> fecha;

    cout << "Hora: ";
    cin >> hora;

    cout << "�Desea Eliminar o Editar el Examen? (S/N): ";
    cin >> sino;

    // Verificar si el usuario ingres� 'S' o 's'
    if (sino == 'S' || sino == 's') {
        cout << "�Qu� examen desea eliminar o editar?" << endl;
        cout << "Matematicas" << endl;
        cout << "Espanol" << endl;
        cout << "Historia" << endl;
        cout << "Ingles" << endl;
        cout << "Geografia" << endl;
        cin >> materias;
        cout << "Se ha eliminado con �xito :)" << endl;
    } else {
        cout << "Nombre del proyecto: ";
        cin >> nproyecto;
        cout << "Fecha de entrega: ";
        cin >> fechae;
    }

    cout << "�Desea agregar una nota o tarea al proyecto? (S/N): ";
    cin >> notaOpcion;

    // Verificar si el usuario ingres� 'S' o 's'
    if (notaOpcion == 'S' || notaOpcion == 's') {
        cout << "Agregue su nota o tarea: ";
        cin >> tarea;
        cout << "Se ha agregado con �xito :)";
    } else {
        cout << "Salir";
    }

    return 0;
}
