// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 23/02/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int num,d;
    int s=0;
    cout<<"Ingrese un numero: ";
    cin>>num;
    for (int i=1;i<num;i++){
        if (num%i==0){
            s=s+i;
        }
    }
    if (s==num){
        cout<<"El numero "<<num<<" es perfecto";
    }
    else{
        cout<<"El numero "<<num<<" no es perfecto";
    }
    return 0;
}
