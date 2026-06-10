// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 22/05/2026

#include<iostream>
using namespace std;

struct Empleado
{
    char nombre[50];
    int id;
    float sueldo;
    int antiguedad;
};

void leerEmpleados(Empleado empleado[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin.ignore();

        cout<<endl;
        cout<<"Empleado "<<i+1<<endl;

        cout<<"Nombre: ";
        cin.getline(empleado[i].nombre,50);

        cout<<"ID: ";
        cin>>empleado[i].id;

        cout<<"Sueldo: ";
        cin>>empleado[i].sueldo;

        cout<<"Antiguedad: ";
        cin>>empleado[i].antiguedad;
    }
}

int contarSueldosMayores(Empleado empleado[], int n, float sueldo)
{
    int contador=0;

    for(int i=0;i<n;i++)
    {
        if(empleado[i].sueldo>sueldo)
        {
            contador++;
        }
    }

    return contador;
}

float promedioAntiguedad(Empleado empleado[], int n)
{
    int suma=0;

    for(int i=0;i<n;i++)
    {
        suma=suma+empleado[i].antiguedad;
    }

    return (float)suma/n;
}

int main()
{
    Empleado empleado[100];
    int n;
    float sueldo;

    cout<<"Cantidad de empleados: ";
    cin>>n;

    leerEmpleados(empleado,n);

    cout<<endl;
    cout<<"Introduzca un sueldo: ";
    cin>>sueldo;

    cout<<"Cantidad de empleados con sueldo mayor: "
        <<contarSueldosMayores(empleado,n,sueldo)<<endl;

    cout<<"Promedio de antiguedad: "
        <<promedioAntiguedad(empleado,n)<<endl;

    return 0;
}
