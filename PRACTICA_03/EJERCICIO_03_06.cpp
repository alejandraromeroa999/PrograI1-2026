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

    int N,n1,n2,n3;
    int p;

    cout<<"Ingrese la cantidad de ninos: ";
    cin>>N;

    srand(time(0));

    n1 = rand()%N + 1;
    n2 = rand()%(N-n1+1);
    n3 = N - n1 - n2;

    cout<<"Ninos de 1 ano: "<<n1<<endl;
    cout<<"Ninos de 2 anos: "<<n2<<endl;
    cout<<"Ninos de 3 anos: "<<n3<<endl;

    p = (n1*6) + (n2*3) + (n3*2);

    cout<<"Panales usados por dia: "<<p<<endl;

    return 0;
}
