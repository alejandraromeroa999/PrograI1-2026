// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 04/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool par(int numero);

int main(){
    int num;
    cout<<"Ingrese un numero: ";
    cin>>num;

    if(par(num))
        cout << "El numero es par";
    else
        cout << "El numero es impar";

}
bool par(int numero){
    if (numero%2==0){
        return true;
    }
    else
    {
        return false;
    }
}
