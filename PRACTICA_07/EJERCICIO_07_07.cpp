// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Fecha de creación: 27/03/2026
//Numero de ejercicio: 7

#include <iostream>
using namespace std;

int main() {
    int v[10];
    int i = 0, num;

    cout << "Ingrese los numeros:" << endl;
    do {
        cin >> num;

        if(num >= 0) {
            v[i] = num;
            i++;
        }

    } while(i < 10 && num >= 0);
    cout << endl << "Vector ingresado:" << endl;

    for(int j = 0; j < i; j++) {
        cout << v[j] << " ";
    }

    return 0;
}
