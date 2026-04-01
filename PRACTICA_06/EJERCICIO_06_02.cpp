// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en telecomunicaciones
// Fecha creación: 27/03/2026



#include <iostream>
using namespace std;


void CalcularVolumen(float &r, float &h, float &v) {
    v = 3.1416 * r * r * h;
}

int main() {
    float r, h = 10, v;
    cout << "Ingrese el radio: ";
    cin >> r;

    CalcularVolumen(r, h, v);

    cout << "El volumen es: " << v << endl;

    return 0;
}
