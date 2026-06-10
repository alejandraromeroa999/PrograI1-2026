// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 22/05/2026

#include<iostream>
using namespace std;

struct Atleta
{
    char nombre[50];
    char pais[50];
    int edad;
    int mejor_tiempo;
};

void leer(Atleta atleta[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin.ignore();

        cout<<endl;
        cout<<"Atleta "<<i+1<<endl;

        cout<<"Nombre: ";
        cin.getline(atleta[i].nombre,50);
        cout<<"Pais: ";
        cin.getline(atleta[i].pais,50);
        cout<<"Edad: ";
        cin>>atleta[i].edad;
        cout<<"Mejor tiempo (segundos): ";
        cin>>atleta[i].mejor_tiempo;
    }
}

int Mejortiempo(Atleta atleta[], int n)
{
    int posicion = 0;

    for(int i=1;i<n;i++)
    {
        if(atleta[i].mejor_tiempo < atleta[posicion].mejor_tiempo)
        {
            posicion = i;
        }
    }

    return posicion;
}

void mostrar(Atleta atleta)
{
    cout<<endl;
    cout<<"El atleta con mejor tiempo es: "<<endl;

    cout<<"Nombre: "<<atleta.nombre<<endl;
    cout<<"Pais: "<<atleta.pais<<endl;
}

int main()
{
    Atleta atleta[100];
    int n, pos;

    cout<<"Cantidad de atletas: ";
    cin>>n;

    leer(atleta,n);
    pos = Mejortiempo(atleta,n);
    mostrar(atleta[pos]);
    return 0;
}
