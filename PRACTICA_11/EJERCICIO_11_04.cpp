// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 04/05/2026

#include <iostream>
using namespace std;

int mcd(int a, int b)
{
    if (b == 0)
        return a;

    return mcd(b, a % b);
}

int main()
{
    int n1, n2;

    cout << "Ingrese dos numeros: ";
    cin >> n1;
    cin>>n2;

    cout << "El MCD es: " << mcd(n1, n2);

    return 0;
}
