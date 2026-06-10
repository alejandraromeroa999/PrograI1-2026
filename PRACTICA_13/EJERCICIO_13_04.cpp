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
    char genero[20];
    float salario;
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
        cout<<"Genero: ";
        cin.getline(empleado[i].genero,20);
        cout<<"Salario: ";
        cin>>empleado[i].salario;
    }
}

int menorSalario(Empleado empleado[], int n)
{
    int menor = 0;

    for(int i=1;i<n;i++)
    {
        if(empleado[i].salario < empleado[menor].salario)
        {
            menor = i;
        }
    }

    return menor;
}

int mayorSalario(Empleado empleado[], int n)
{
    int mayor = 0;

    for(int i=1;i<n;i++)
    {
        if(empleado[i].salario > empleado[mayor].salario)
        {
            mayor = i;
        }
    }

    return mayor;
}

void mostrarEmpleado(Empleado empleado)
{
    cout<<"Nombre: "<<empleado.nombre<<endl;
    cout<<"Genero: "<<empleado.genero<<endl;
    cout<<"Salario: "<<empleado.salario<<endl;
}

int main()
{
    Empleado empleado[100];
    int n;
    int menor;
    int mayor;

    cout<<"Ingrese la cantidad de empleados: ";
    cin>>n;

    leerEmpleados(empleado,n);

    menor = menorSalario(empleado,n);
    mayor = mayorSalario(empleado,n);

    cout<<endl;
    cout<<"Empleado con menor salario:"<<endl;
    mostrarEmpleado(empleado[menor]);

    cout<<endl;
    cout<<"Empleado con mayor salario:"<<endl;
    mostrarEmpleado(empleado[mayor]);

    return 0;
}
