// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 22/05/2026

#include<iostream>

using namespace std;

struct Estudiante
{
    int cedula;
    char nombre[30];
    char apellido[30];
    int edad;
    char profesion[30];
    char lugar_nacimiento[30];
    char direccion[50];
    int telefono;
};

void leerEstudiantes(Estudiante estudiante[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<endl;
        cout<<"Estudiante "<<i+1<<endl;

        cout<<"Cedula: ";
        cin>>estudiante[i].cedula;

        cin.ignore();

        cout<<"Nombre: ";
        cin.getline(estudiante[i].nombre,30);

        cout<<"Apellido: ";
        cin.getline(estudiante[i].apellido,30);

        cout<<"Edad: ";
        cin>>estudiante[i].edad;

        cin.ignore();

        cout<<"Profesion: ";
        cin.getline(estudiante[i].profesion,30);

        cout<<"Lugar de nacimiento: ";
        cin.getline(estudiante[i].lugar_nacimiento,30);

        cout<<"Direccion: ";
        cin.getline(estudiante[i].direccion,50);

        cout<<"Telefono: ";
        cin>>estudiante[i].telefono;
    }
}

void mostrarEstudiantes(Estudiante estudiante[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<endl;
        cout<<"ESTUDIANTE "<<i+1<<endl;

        cout<<"Cedula: "<<estudiante[i].cedula<<endl;
        cout<<"Nombre: "<<estudiante[i].nombre<<endl;
        cout<<"Apellido: "<<estudiante[i].apellido<<endl;
        cout<<"Edad: "<<estudiante[i].edad<<endl;
        cout<<"Profesion: "<<estudiante[i].profesion<<endl;
        cout<<"Lugar de nacimiento: "<<estudiante[i].lugar_nacimiento<<endl;
        cout<<"Direccion: "<<estudiante[i].direccion<<endl;
        cout<<"Telefono: "<<estudiante[i].telefono<<endl;
    }
}

int main()
{
    Estudiante estudiante[100];
    int n;

    cout<<"Cantidad de estudiantes: ";
    cin>>n;

    leerEstudiantes(estudiante,n);

    cout<<endl;
    cout<<"LISTA DE ESTUDIANTES"<<endl;
    mostrarEstudiantes(estudiante,n);

    return 0;
}
