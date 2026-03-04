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
    int num, n, suma=0, may=1, men=1000;
    float prom;
    cout<<"Cuantos numeros desea generar? ";
    cin>>n;
    srand(time(0));

    for (int i=1; i<=n;i++){
        num = rand()%1000 + 1;
        cout<<num<<", ";
        suma=suma+num;
        if (num>=may){
            may=num;

        }
        if(num <= men){
            men = num;
        }
    }
    prom=suma/n;
    cout<<endl;
    cout<<"Suma: "<<suma<<endl;
    cout<<"Promedio: "<<prom<<endl;
    cout<<"Mayor valor generado: "<<may<<endl;
    cout<<"Menor valor generado: "<<men<<endl;

    return 0;
}
