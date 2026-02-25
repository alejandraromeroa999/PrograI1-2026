// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 23/02/2026

#include <iostream>
using namespace std;
 int main(){
    int n;
    int sum=0;
    cout<<"Ingrese un numero: ";
    cin>>n;
    for (int i=1; i<=n;i++){
        int fact=1;
        for (int j=1; j<=i;j++)
        {
            fact=fact*j;
        }
        sum=fact+sum;
    }
    cout<<"Suma: "<<sum<<endl;
    return 0;

 }
