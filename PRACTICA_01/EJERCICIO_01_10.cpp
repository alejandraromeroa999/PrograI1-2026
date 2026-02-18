// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 11/02/2026
#include <iostream>
using namespace std;

int main() {

    int mes;
    cout << "Ingrese un numero (1 al 12): ";
    cin >> mes;

    switch (mes) {

        case 1:
            cout << "ENERO";
            break;

        case 2:
            cout << "FEBRERO";
            break;

        case 3:
            cout << "MARZO";
            break;

        case 4:
            cout << "ABRIL";
            break;

        case 5:
            cout << "MAYO";
            break;

        case 6:
            cout << "JUNIO";
            break;

        case 7:
            cout << "JULIO";
            break;

        case 8:
            cout << "AGOSTO";
            break;

        case 9:
            cout << "SEPTIEMBRE";
            break;

        case 10:
            cout << "OCTUBRE";
            break;

        case 11:
            cout << "NOVIEMBRE";
            break;

        case 12:
            cout << "DICIEMBRE";
            break;

        default:
            cout << "ERROR";
    }

    return 0;
}
