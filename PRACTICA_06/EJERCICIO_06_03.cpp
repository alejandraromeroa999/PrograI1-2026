// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en telecomunicaciones
// Fecha creación: 27/03/2026

#include <iostream>
using namespace std;

void ModificarValores(int a, int &b) {
    a = a * 2;
    b = b + 10;

int main() {
    int m = 5;
    int n = 7;

    cout << "Previa modificacion: " << endl;
    cout << "m = " << m << endl;
    cout<<"n = " << n << endl;
    ModificarValores(m, n);
    cout << "Ahora: " << endl;
    cout << "m = " << m << ", n = " << n << endl;

    return 0;

}
