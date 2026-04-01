// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en telecomunicaciones
// Fecha creación: 27/03/2026

#include <iostream>
using namespace std;

void IntercambiarValores(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 20, b = 30;


    cout << "Valores antes del intercambio:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    IntercambiarValores(a, b);

    cout << "Valores intercambiados:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;

}
