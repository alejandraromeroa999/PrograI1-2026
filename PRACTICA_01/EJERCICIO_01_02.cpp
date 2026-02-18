// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 11/02/2026

#include <iostream>
using namespace std;

int main(){
    system ("cls");
    float precio,total;
    cout<<"Ingrese el precio del producto: "<<endl;
    cin>>precio;
    total=precio+(precio*13/100);
    cout<<"Precio del producto mas IVA(13%): "<<total;
    return 0;

}
