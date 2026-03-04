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
    int n,num,p=0,res;
    cout<<"Cuantos numeros desea generar? ";
    cin>>n;
    srand(time(0));

    for (int i=1; i<=n;i++){
        num = rand()%10000 + 1;
        cout<<num<<", ";
        int c=0;
        for (int j=1;j<=num;j++){
            res=num%j;
            if (res==0){
                c++;
            }
        }
        if (c==2){
                p=p+1;
            }
    }
    cout<<endl;
    cout<<"Hay "<<p<<" numeros primos";
    return 0;
}
