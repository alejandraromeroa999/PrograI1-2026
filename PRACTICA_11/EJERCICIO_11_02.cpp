// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 04/05/2026

#include <iostream>
using namespace std;


int potencia (int b, int e){
     if(e == 0){
        return 1;
    }
    else{
        return b*potencia(b, e - 1);
    }

}

int main(){
    int b,e;
    cout<<"Ingrese la base: ";
    cin>>b;
    cout<<"Ingrese el exponente: ";
    cin>>e;
    cout<<"La potencia es: "<<potencia (b,e);
}
