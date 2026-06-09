// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 13/05/2026
//Numero de ejercicio: 4

#include<iostream>
#include<fstream>

using namespace std;

int buscarPalabra(string palabraBuscada)
{
    ifstream lectura("datos.txt");

    string palabra;
    int contador=0;

    while(lectura>>palabra)
    {
        if(palabra==palabraBuscada)
        {
            contador++;
        }
    }

    lectura.close();

    return contador;
}

int main()
{
    string palabra;

    cout<<"Ingrese la palabra a buscar: ";
    cin>>palabra;

    cout<<"La palabra aparece "
        <<buscarPalabra(palabra)
        <<" veces";

    return 0;
}
