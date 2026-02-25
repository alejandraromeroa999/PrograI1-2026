// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 23/02/2026

#include <iostream>
using namespace std;

int main(){
    int num, prod;
    cout<<"Ingrese un numero entero: ";
    cin>>num;
    for (int i=1; i<=10; i++){
            prod=num*i;
            cout<<num<<" * "<<i<<" = "<<prod<<endl;
    }
    return 0;
}
