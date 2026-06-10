// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 22/05/2026

#include<iostream>

using namespace std;

struct Alumno
{
    char nombre[50];
    float T1;
    float T2;
    float T3;
    float T4;
    float EF;
    float NF;
};

void leerAlumnos(Alumno alumno[], int n)
{
    float NP;

    for(int i=0;i<n;i++)
    {
        cin.ignore();

        cout<<endl;
        cout<<"Alumno "<<i+1<<endl;

        cout<<"Nombre: ";
        cin.getline(alumno[i].nombre,50);

        cout<<"T1: ";
        cin>>alumno[i].T1;

        cout<<"T2: ";
        cin>>alumno[i].T2;

        cout<<"T3: ";
        cin>>alumno[i].T3;

        cout<<"T4: ";
        cin>>alumno[i].T4;

        cout<<"EF: ";
        cin>>alumno[i].EF;

        NP=(alumno[i].T1+alumno[i].T2+alumno[i].T3+alumno[i].T4)/4;

        alumno[i].NF=0.7*NP+0.3*alumno[i].EF;
    }
}

float promedioCurso(Alumno alumno[], int n)
{
    float suma=0;

    for(int i=0;i<n;i++)
    {
        suma=suma+alumno[i].NF;
    }

    return suma/n;
}

int notaMayor(Alumno alumno[], int n)
{
    int posicion=0;

    for(int i=1;i<n;i++)
    {
        if(alumno[i].NF>alumno[posicion].NF)
        {
            posicion=i;
        }
    }

    return posicion;
}

int notaMenor(Alumno alumno[], int n)
{
    int posicion=0;

    for(int i=1;i<n;i++)
    {
        if(alumno[i].NF<alumno[posicion].NF)
        {
            posicion=i;
        }
    }

    return posicion;
}

int main()
{
    Alumno alumno[100];
    int n;
    int mayor;
    int menor;

    cout<<"Cantidad de alumnos: ";
    cin>>n;

    leerAlumnos(alumno,n);

    mayor=notaMayor(alumno,n);
    menor=notaMenor(alumno,n);

    cout<<endl;
    cout<<"Promedio del curso: "<<promedioCurso(alumno,n)<<endl;

    cout<<endl;
    cout<<"Mayor nota:"<<endl;
    cout<<alumno[mayor].nombre<<endl;
    cout<<alumno[mayor].NF<<endl;

    cout<<endl;
    cout<<"Menor nota: "<<endl;
    cout<<alumno[menor].nombre<<endl;
    cout<<alumno[menor].NF<<endl;

    return 0;
}
