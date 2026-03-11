// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 04/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

float areatriangulo(float base, float altura){
    float areat;
    areat=(base*altura)/2;
    return areat;
}
int main(){
    float base, alt;
    cout<<"Ingrese la base del triangulo: ";
    cin>>base;
    cout<<"Ingrese la altura: ";
    cin>>alt;
    cout<<"El area del triangulo es: "<<areatriangulo(base, alt);
    return 0;
}
