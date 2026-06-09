// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 04/05/2026

#include <iostream>
using namespace std;

void ullman(int n)
{

    cout << n << " ";

    if (n == 1)
        return;

    if (n % 2 == 0)
        ullman(n / 2);
    else
        ullman(3 * n + 1);
}

int main()
{
    int n;

    cout << "Ingrese un numero: ";
    cin >> n;

    ullman(n);

    return 0;
}
