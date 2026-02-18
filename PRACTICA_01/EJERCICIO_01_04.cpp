// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 11/02/2026

#include <iostream>
using namespace std;

int main(){
    system ("cls");
    float notap, notat, notapt, notaf;
    cout<<"Ingrese la nota de practicas: ";
    cin>>notap;
    cout<<"Ingrese la nota teorica: ";
    cin>>notat;
    cout<<"Ingrese la nota de las participaciones: ";
    cin>>notapt;

    notap=notap*30/100;
    notat=notat*60/100;
    notapt=notapt*10/100;
    notaf=notap+notat+notapt;
    cout<<"La nota final es: "<<notaf;
    return 0;
}
