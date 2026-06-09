// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 04/05/2026

#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n;

    cout<<("Ingrese n: ");
    cin>>n;

    cout<<"El "<<n <<" numero en la secuencia de Fibonacci es: "<<fibonacci(n);

    return 0;
}
