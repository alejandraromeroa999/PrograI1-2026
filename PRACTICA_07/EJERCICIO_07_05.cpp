// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Fecha de creación: 27/03/2026
//Numero de ejercicio: 5

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese la dimension de los vectores: ";
    cin >> n;

    int v1[100], v2[100], vecf[200];

    cout << endl << "Vector 1:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> v1[i];
    }

    cout << endl << "Vector 2:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> v2[i];
    }

    for(int i = 0; i < n; i++) {
        vecf[i] = v1[i];
        vecf[i + n] = v2[i];
    }

    cout << endl << "Vector combinado:" << endl;
    for(int i = 0; i < 2*n; i++) {
        cout << vecf[i] << " ";
    }

    cout << endl;

    return 0;
}
