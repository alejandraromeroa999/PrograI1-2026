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

    int n, m, i=1;
    int cara=0;
    int cruz=0;
    cout<<"Ingrese cuantas veces desea lanzar la moneda: ";
    cin>>n;
    srand(time(0));

    while(i<=n){
        m = rand()%2 + 1;

        if(m==2){
            cara++;
            cout<<"Cara"<<endl;

        }
        else{
            cruz++;
            cout<<"Cruz"<<endl;
        }
        i++;

    }

    cout<<"Porcentaje de cara: "<<cara*100/n<<endl;
    cout<<"Porcentaje de cruz: "<<cruz*100/n<<endl;
    return 0;
}
