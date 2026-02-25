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

    int num, numal, cont;
    cont = 0;

    srand(time(0));
    numal = rand() % 100 + 1;

    cout<<"Piense un numero entre 1 y 100"<<endl;

    do{
        cout<<"Ingrese el numero: ";
        cin>>num;

        cont = cont + 1;

        if(num < numal){
            cout<<"El numero que busca es mayor"<<endl;
        }
        else{
            if(num > numal){
                cout<<"El numero que busca es menor"<<endl;
            }
            else{
                cout<<"Correcto, adivino el numero"<<endl;
            }
        }

    }while(num != numal);

    cout<<"Cantidad de intentos: "<<cont<<endl;

    return 0;
}
