// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 22/05/2026

#include<iostream>
#include<cstring>
using namespace std;

struct Atleta
{
    char nombre[50];
    char departamento[30];
    char deporte[30];
    int medallas;
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

        cout<<"Departamento: ";
        cin.getline(atleta[i].departamento,30);

        cout<<"Deporte: ";
        cin.getline(atleta[i].deporte,30);

        cout<<"Cantidad de medallas: ";
        cin>>atleta[i].medallas;
    }
}

void mostrarMedallero(Atleta atleta[], int n)
{
    int laPaz=0,santaCruz=0,cochabamba=0;

    for(int i=0;i<n;i++)
    {
        if(strcmp(atleta[i].departamento,"La Paz")==0)
        {
            laPaz=laPaz+atleta[i].medallas;
        }

        if(strcmp(atleta[i].departamento,"Santa Cruz")==0)
        {
            santaCruz=santaCruz+atleta[i].medallas;
        }

        if(strcmp(atleta[i].departamento,"Cochabamba")==0)
        {
            cochabamba=cochabamba+atleta[i].medallas;
        }
    }

    cout<<endl;
    cout<<"MEDALLERO FINAL"<<endl;

    cout<<"La Paz: "<<laPaz<<endl;
    cout<<"Santa Cruz: "<<santaCruz<<endl;
    cout<<"Cochabamba: "<<cochabamba<<endl;
}

int main()
{
    Atleta atleta[100];
    int n;

    cout<<"Cantidad de atletas: ";
    cin>>n;

    leer(atleta,n);

    mostrarMedallero(atleta,n);

    return 0;
}
