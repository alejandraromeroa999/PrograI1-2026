// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 04/05/2026

#include <iostream>
using namespace std;

bool iguales(int v1[], int v2[], int n)
{
    if (n == 0)
        return true;

    if (v1[n-1] != v2[n-1])
        return false;

    return iguales(v1, v2, n-1);
}

int main()
{
    int v[] = {10,8,9,5};
    int v1[] = {10,8,9,5};
    int n = 4;

    if (iguales(v, v1, n))
        cout << "Los vectores son iguales";
    else
        cout << "Los vectores son diferentes";

    return 0;
}
