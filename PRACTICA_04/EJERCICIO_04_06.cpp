// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 04/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int suma(int num);
int main(){
    int n;
    cout<<"Ingrese un numero entero positivo: ";
    cin>>n;
    while (n<0){
        cout<<"Intente nuevamente: ";
        cin>>n;
    }
    cout<<endl;
    cout<<"La suma de todos los numeros de 1 hasta "<<n<<" es: "<<suma(n);

}

int suma(int num){
    int sum=0;
    for (int i=1;i<=num;i++){
        sum=sum+i;
    }
    return sum;
}
