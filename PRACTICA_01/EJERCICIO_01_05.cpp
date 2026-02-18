// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 11/02/2026

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float cat1, cat2, hip;
    cout << "Ingrese el primer cateto: ";
    cin >> cat1;
    cout << "Ingrese el segundo cateto: ";
    cin >> cat2;
    hip = sqrt(pow(cat1, 2) + pow(cat2, 2));
    cout << "La hipotenusa es: "<< hip;
    return 0;
}

