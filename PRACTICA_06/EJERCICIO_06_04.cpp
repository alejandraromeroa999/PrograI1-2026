// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en telecomunicaciones
// Fecha creación: 27/03/2026

#include <iostream>
using namespace std;

void CalcularPrecioTotal(float &precio, float &impuesto, float &total){
    total = precio + (precio * impuesto);
}

int main (){
    float precio, impuesto = 0.13, total;
    cout<<"Ingrese el precio: ";
    cin>>precio;
    CalcularPrecioTotal(precio, impuesto, total);
    cout<<"Precio total: "<<total<<endl;
    return 0;
}
