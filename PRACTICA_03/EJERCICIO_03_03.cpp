// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 04/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int num, fact=1;
    srand(time(0));
    num = rand()%10 + 1;

    cout<<"Numero generado: "<<num<<endl;
    for (int i=1; i<=num;i++){
        fact=fact*i;
    }
    cout<<"El factorial es "<<fact;
    return 0;

}
