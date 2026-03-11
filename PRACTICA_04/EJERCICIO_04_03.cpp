// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 04/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const double pi = 3.1416;

float volumen(float h, float r);
int main(){
    float h,r;
    cout<<"Ingrese la altura del cilindro: ";
    cin>>h;
    cout<<"Ingrese el radio: ";
    cin>>r;
    cout<<endl;
    cout<<"El volumen del cilindro es: "<<volumen(h,r);

}
float volumen(float h, float r){
    return pi * r * r * h;
}
