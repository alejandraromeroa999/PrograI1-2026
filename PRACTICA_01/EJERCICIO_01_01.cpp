// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 11/02/2026

#include <iostream>
using namespace std;

int main(){
    float num1, num2,suma,resta,mult,div;
    system ("cls");
    cout<<"ingrese el primer numero"<<endl;
    cin>>num1;
    cout<<"ingrese el segundo numero"<<endl;
    cin>>num2;
    suma=num1+num2;
    resta=num1-num2;
    mult=num1*num2;
    div=num1/num2;
    cout<<"Suma: "<<suma<<endl;
    cout<<"Resta: "<<resta<<endl;
    cout<<"Multiplicacion: "<<mult<<endl;
    cout<<"Division: "<<div<<endl;

    return 0;
}
