// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en telecomunicaciones
// Fecha creación: 27/03/2026

#include <iostream>
using namespace std;

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos){
    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;
}

int main (){

    int totalSegundos;
    int horas, minutos, segundos;

    cout<<"Ingrese los segundos: ";
    cin>>totalSegundos;
    calcularTiempo(totalSegundos, horas, minutos, segundos);
    cout<<"Horas: "<<horas<<endl;
    cout<<"Minutos: "<<minutos<<endl;
    cout<<"Segundos: "<<segundos<<endl;

    return 0;
}
