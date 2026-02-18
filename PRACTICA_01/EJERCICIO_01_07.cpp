// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 11/02/2026

#include <iostream>
using namespace std;
int main(){
    int edad;
    cout<<"Ingrese la edad en anios: ";
    cin>>edad;
    if (edad>=18 && edad<=25){
        cout<<"La edad se encuentra en el rango de 18 a 25 anios";
    }
    else {
        cout<<"La edad no se encuentra en el rango de 18 a 25 anios";
    }
    return 0;

}
