// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 04/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ContadorDigitos(int num);
int main(){
    int num;
    cout<<"Ingrese un numero: ";
    cin>>num;
    while (num<0){
        cout<<"Intente nuevamente: ";
        cin>>num;
    }
    cout<<"La cantidad de digitos que componen al numero es: "<<ContadorDigitos(num);
    return 0;
}
int ContadorDigitos(int num){
    int sum=0, c=1;
    while (num!=0){
        num=num/10;
        sum++;
    }
    return sum;
}
