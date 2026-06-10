// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 22/05/2026

#include<iostream>
using namespace std;

struct Libro
{
    char titulo[50];
    char autor[50];
    int anio_publicacion;
    bool disponible;
};

void leer(Libro &libro)
{
    cout<<"Titulo: ";
    cin.getline(libro.titulo,50);

    cout<<"Autor: ";
    cin.getline(libro.autor,50);

    cout<<"Anio de publicacion: ";
    cin>>libro.anio_publicacion;

    cout<<"Disponible (1=Si - 0=No): ";
    cin>>libro.disponible;
}

void mostrar(Libro libro)
{
    cout<<endl;
    cout<<"Ingrese los datos del libro:"<<endl;
    cout<<"Titulo: "<<libro.titulo<<endl;
    cout<<"Autor: "<<libro.autor<<endl;
    cout<<"Anio de publicacion: "<<libro.anio_publicacion<<endl;

    if(libro.disponible)
    {
        cout<<"Disponible"<<endl;
    }
    else
    {
        cout<<"No disponible"<<endl;
    }
}

int main()
{
    Libro libro;
    leer(libro);
    mostrar(libro);
    return 0;
}
