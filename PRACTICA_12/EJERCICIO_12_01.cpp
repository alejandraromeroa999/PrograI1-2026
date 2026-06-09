// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 13/05/2026
//Numero de ejercicio: 1

#include <iostream>
#include <fstream>
using namespace std;

void guardarNombres(int n)
{
    ofstream archivo("nombres.txt");
    string nombre;

    for(int i=1; i<=n; i++)
    {
        cout<<"Ingrese un nombre: ";
        cin>>nombre;

        archivo<<nombre<<endl;
    }
    archivo.close();
}

void mostrarNombres()
{
    ifstream lectura("nombres.txt");
    string nombre;

    cout<<"Archivo: "<<endl;
    while(lectura >> nombre)
    {
        cout<<nombre<<endl;
    }

    lectura.close();
}

int main()
{
    int n;
    cout<<"Cuantos nombres desea ingresar?: ";
    cin>>n;
    guardarNombres(n);
    mostrarNombres();
    return 0;
}
