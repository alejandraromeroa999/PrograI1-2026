// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Fecha de creación: 27/03/2026
//Numero de ejercicio: 4

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese la dimension del vector: ";
    cin >> n;

    int v1[100], v2[100], resultado[100];

    cout << "Vector 1: "<<endl;
    for(int i = 0; i < n; i++) {
        cout << "Elemento "<< i+1 << ": ";
        cin >> v1[i];
    }
cout<<endl;
    cout << "Vector 2:"<<endl;
    for(int i = 0; i < n; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> v2[i];
    }
cout<<endl;

    for(int i = 0; i < n; i++) {
        resultado[i] = v1[i] * v2[i];
    }

cout<<endl;
    cout << "Vector resultado: "<<endl;
    for(int i = 0; i < n; i++) {
        cout << resultado[i] << " ";
    }

    return 0;
}
