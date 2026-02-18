// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 11/02/2026

#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4;
    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;
    cout << "Ingrese el tercer numero: ";
    cin >> n3;
    cout << "Ingrese el cuarto numero: ";
    cin >> n4;

    if (n4 == n1 || n4 == n2 || n4 == n3) {
        cout << "El cuarto numero coincide con uno de los anteriores";
    }
    else {
        cout << "El cuarto numero no coincide con los anteriores numeros";
    }

    return 0;
}
