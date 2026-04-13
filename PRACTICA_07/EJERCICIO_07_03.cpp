// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Fecha de creación: 27/03/2026
//Numero de ejercicio: 3

#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    float sum2=0;

    cout << "Ingrese la cantidad de calificaciones: ";
    cin >> n;

    int calificaciones[100];
    float desviacion[100];

    for(int i = 0; i < n; i++) {
        cout << "Ingrese calificacion " << i+1 << ": ";
        cin >> calificaciones[i];
    }

    for(int i = 0; i < n; i++) {
        suma += calificaciones[i];
    }

    float promedio = suma / n;

    for(int i = 0; i < n; i++) {
        desviacion[i] = calificaciones[i] - promedio;
    }

    cout << "\nCalificacion   Desviacion\n";
    for(int i = 0; i < n; i++) {
        cout << calificaciones[i] << "         " << desviacion[i] << endl;
    }

    for(int i = 0; i < n; i++) {
        sum2 += desviacion[i] * desviacion[i];
    }

    float var = sum2 / n;

    cout<<endl;
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Varianza: " << var << endl;

    return 0;
}
