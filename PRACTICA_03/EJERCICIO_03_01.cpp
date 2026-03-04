// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 04/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    int n, d, i=1;
    int c=0;
    cout<<"Ingrese cuantas veces desea lanzar el dado: ";
    cin>>n;
    srand(time(0));

    while(i<=n){
        d = rand()%6 + 1;
        cout<<"Nro. de cara: "<<d<<endl;

        if(d%2==0){
            c++;

        }

        i++;

    }

    cout<<"Frecuencia de caras pares: "<<c<<endl;

    return 0;
}

