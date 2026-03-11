// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 04/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

float paralelo(float bol, float par, float ofi);

int main (){
    float monto, ofi, par;
    cout<<"Ingrese el monto que desea convertir a dolares: ";
    cin>>monto;
    cout<<"Ingrese el t/c oficial: ";
    cin>>ofi;
    cout<<"Ingrese el t/c paralelo: ";
    cin>>par;
    cout<<endl;
    paralelo(monto,par, ofi);
    return 0;
}
float paralelo(float bol, float par, float ofi){
    float totalpar=bol/par;
    float totalofi=bol/ofi;
    cout<<"Conversion al tipo de cabio oficial: "<<totalofi<<endl;
    cout<<"Conversion al tipo de cambio paralelo: "<<totalpar;
}



