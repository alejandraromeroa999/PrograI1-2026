// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 04/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

float calculopromedio(float nota1, float nota2);

int main(){
    float nota1, nota2;
    cout<<"Ingrese la primera nota: ";
    cin>>nota1;
     while (nota1<0){
        cout<<"Intente nuevamente: ";
        cin>>nota1;
    }
    cout<<"Ingrese la segunda nota: ";
    cin>>nota2;
     while (nota2<0){
        cout<<"Intente nuevamente: ";
        cin>>nota2;
    }
    cout<<"El promedio es: "<<calculopromedio(nota1, nota2);
}

float calculopromedio(float nota1, float nota2){
    float prom;
    prom=(nota1+nota2)/2;
    return prom;
}
