// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 04/05/2026

#include <iostream>
using namespace std;

int funcionQ(int n)
{

    if (n == 1)
        return 1;

    return funcionQ(n - 1) + n * n;
}

int main()
{
    int n;

    cout << "Ingrese n: ";
    cin >> n;

    cout << "Q(" << n << ") = " << funcionQ(n);

    return 0;
}
