// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Fecha de creación: 27/03/2026
//Numero de ejercicio: 6

#include <iostream>
using namespace std;

int main() {
    int vector1[5], vector2[5], vector3[5];

    cout << "Vector 1:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> vector1[i];
    }

    cout << endl << "Vector 2:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> vector2[i];
    }

    for(int i = 0; i < 5; i++) {
        vector3[i] = vector1[i] + vector2[i];
    }

    cout << endl << "Vector resultante:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << vector3[i] << " ";
    }

    return 0;
}
