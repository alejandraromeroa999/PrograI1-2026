// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 13/05/2026
//Numero de ejercicio: 3

#include <iostream>
#include <fstream>

using namespace std;

void registrarEstudiantes()
{
    ofstream archivo("estudiantes.txt");

    string nombre;
    int edad;
    float promedio;
    int n;

    cout<<"¿Cuántos estudiantes desea registrar? ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<"Estudiante "<<i<<endl;

        cout<<"Nombre: ";
        cin>>nombre;

        cout<<"Edad: ";
        cin>>edad;

        cout<<"Promedio: ";
        cin>>promedio;

        archivo<<"Nombre: "<<nombre<<endl;
        archivo<<"Edad: "<<edad<<endl;
        archivo<<"Promedio: "<<promedio<<endl;
        archivo<<endl;
    }

    archivo.close();
}

void mostrarEstudiantes()
{
    ifstream lectura("estudiantes.txt");

    string linea;

    cout<<"REGISTRO DE ESTUDIANTES "<<endl;

    while(getline(lectura,linea))
    {
        cout<<linea<<endl;
    }

    lectura.close();
}

int main()
{
    registrarEstudiantes();
    mostrarEstudiantes();

    return 0;
}
