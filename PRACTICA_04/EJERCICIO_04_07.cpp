// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 04/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

float calculoDistancia(float v, float t);
int main(){
    float v, t;
    cout<<"Ingrese la velocidad constante: ";
    cin>>v;
    cout<<"Ingrese el tiempo: ";
    cin>>t;
    cout<<"La distancia calculada es: "<<calculoDistancia(v,t);
}
float calculoDistancia(float v, float t){
    float d;
    d=v*t;
    return d;
}
