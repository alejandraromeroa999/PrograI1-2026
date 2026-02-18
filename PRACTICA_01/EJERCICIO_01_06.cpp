// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 11/02/2026

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Ingrese un numero: ";
    cin>>num;
    if ((num%2)==0){
        cout<<"El numero "<<num<<" es par";
    }
    else{
        cout<<"El numero "<<num<<" es impar";
    }
    return 0;
}

