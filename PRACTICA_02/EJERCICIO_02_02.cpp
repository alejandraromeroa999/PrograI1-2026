// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 23/02/2026

#include <iostream>
using namespace std;

int main(){
    int num, sum, sump, sumi,sumpr, cont;
    sum=0;
    sumi=0;
    sump=0;
    sumpr=0;
    cout<<"Ingrese un numero: ";
    do{
        cin>>num;
        sum=sum+num;
        if (num%2==0){
            sump=sump+num;
        }
        else{
                sumi=sumi+num;
        }

        cont=0;
        for (int i=1;i<=num;i++){
                if (num%i==0){
                    cont=cont+1;
                }
        }
        if (num>1&&cont==2){
                    sumpr=sumpr+num;
        }
    }
    while (num!=0);
    cout<<"Suma de los numeros ingresados: "<<sum<<endl;
    cout<<"Suma de los numeros pares: "<<sump<<endl;
    cout<<"Suma de los numeros impares: "<<sumi<<endl;
    cout<<"Suma de los numeros primos: "<<sumpr<<endl;
    return 0;
}
