// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en telecomunicaciones
// Fecha creación: 27/03/2026

#include <iostream>
using namespace std;

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota){
    sumaTotal = sumaTotal + nuevaNota;
    cantidadNotas = cantidadNotas + 1;
}

int main (){

    int N;
    double sumaTotal = 0, nuevaNota;
    int cantidadNotas = 0;
    cout<<"Cuantas notas desea ingresar: ";
    cin>>N;

    for(int i = 0; i < N; i++){

        cout<<"Ingrese nota: ";
        cin>>nuevaNota;
        agregarNota(sumaTotal, cantidadNotas, nuevaNota);

    }
    cout<<"Suma total: "<<sumaTotal<<endl;
    cout<<"Cantidad de notas: "<<cantidadNotas<<endl;

    return 0;
}
