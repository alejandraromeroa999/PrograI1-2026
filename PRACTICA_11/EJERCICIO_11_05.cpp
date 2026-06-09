// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 04/05/2026

#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

int sumaVector(int v[], int n)
{
    if (n == 0)
        return 0;


    return v[n-1] + sumaVector(v, n-1);
}

int main()
{
    int v[] = {1, 9, 10, 4,7};
    int n = 5;

    cout << "La suma es: " << sumaVector(v, n);

    return 0;
}
