// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 23/02/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int num1, num2;
    do {
        cout<<"Ingrese el primer numero: ";
        cin>>num1;
        cout<<"Ingrese el segundo numero: ";
        cin>>num2;
        if (num1==num2){
            cout<<"Ingrese dos numeros distintos";
        }
    }while (num1==num2);

    if (num1>num2){
        for (int i=num1; i>=num2;i--){
            cout<<i<<", ";

        }
    }
    else{
        for (int i=num1; i<=num2;i++){
            cout<<i<<", ";
        }
    }

    return 0;
}
