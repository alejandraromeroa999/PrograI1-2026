// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 04/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int NumeroMayor(int a, int b, int c);

int main(){
    int a, b, c;
    cout<<"Ingrese el primer numero: ";
    cin>>a;
    cout<<"Ingrese el segundo numero: ";
    cin>>b;
    cout<<"Ingrese el tercer numero: ";
    cin>>c;
    cout<<"El numero mayor es: "<<NumeroMayor(a,b,c);
    return 0;
}

int NumeroMayor(int a, int b, int c){
    int may;
    if (a>b&&a>c) may=a;
    else if (b>a&&b>c) may=b;
    else if (c>a&&c>b) may=c;
    return may;
}
