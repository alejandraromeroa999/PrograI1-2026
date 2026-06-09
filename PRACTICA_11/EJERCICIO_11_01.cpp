// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 04/05/2026

#include <iostream>
using namespace std;

int suma (int n){
    if (n<=0){
        return 0;
    }
    else {
        return (n%10)+suma(n/10);
    }
}

int main(){
    int n;
    cin>>n;
    cout<<"La suma de los digitos es: "<<suma(n);

}

