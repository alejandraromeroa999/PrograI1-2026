// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 22/05/2026

#include<iostream>
#include<cstring>

using namespace std;

struct Pelicula
{
    char titulo[50];
    char director[50];
    int duracion;
    int anio_estreno;
    char genero[30];
};

void leerPeliculas(Pelicula pelicula[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin.ignore();

        cout<<endl;
        cout<<"Pelicula "<<i+1<<endl;

        cout<<"Titulo: ";
        cin.getline(pelicula[i].titulo,50);

        cout<<"Director: ";
        cin.getline(pelicula[i].director,50);

        cout<<"Duracion (minutos): ";
        cin>>pelicula[i].duracion;

        cout<<"Anio de estreno: ";
        cin>>pelicula[i].anio_estreno;

        cin.ignore();

        cout<<"Genero: ";
        cin.getline(pelicula[i].genero,30);
    }
}

void mostrarPorGenero(Pelicula pelicula[], int n, char generoBuscado[])
{
    cout<<endl;
    cout<<"PELICULAS DEL GENERO "<<generoBuscado<<endl;

    for(int i=0;i<n;i++)
    {
        if(strcmp(pelicula[i].genero,generoBuscado)==0)
        {
            cout<<pelicula[i].titulo<<endl;
        }
    }
}

void mostrarPorDirector(Pelicula pelicula[], int n, char directorBuscado[])
{
    cout<<endl;
    cout<<"PELICULAS DIRIGIDAS POR "<<directorBuscado<<endl;

    for(int i=0;i<n;i++)
    {
        if(strcmp(pelicula[i].director,directorBuscado)==0)
        {
            cout<<pelicula[i].titulo<<endl;
        }
    }
}

int main()
{
    Pelicula pelicula[100];
    int n;
    char generoBuscado[30];
    char directorBuscado[50];

    cout<<"Cantidad de peliculas: ";
    cin>>n;

    leerPeliculas(pelicula,n);

    cin.ignore();

    cout<<endl;
    cout<<"Genero a buscar: ";
    cin.getline(generoBuscado,30);

    mostrarPorGenero(pelicula,n,generoBuscado);

    cout<<endl;
    cout<<"Director a buscar: ";
    cin.getline(directorBuscado,50);

    mostrarPorDirector(pelicula,n,directorBuscado);

    return 0;
}
