// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 13/05/2026
//Numero de ejercicio: 7

#include <iostream>
#include <fstream>

using namespace std;

void crearArchivo()
{
    ofstream archivo("calificaciones.txt");

    archivo << "Luz 9.5 5.0 9.5 4.3" << endl;
    archivo << "Belen 9.8 7.7 9.2 9.4" << endl;
    archivo << "Carla 6.5 8.5 10.0 6.2" << endl;

    archivo.close();
}

void calcularPromedio()
{
    ifstream lectura("calificaciones.txt");

    ofstream salida("promedios.txt");

    string nombre;
    float nota1, nota2, nota3, nota4;
    float promedio;

    while (lectura >> nombre >> nota1 >> nota2 >> nota3 >> nota4)
    {
        promedio = (nota1 + nota2 + nota3 + nota4) / 4;

        salida << nombre << " " << promedio << endl;
    }

    lectura.close();
    salida.close();
}

void mostrarPromedio()
{
    ifstream lectura("promedios.txt");

    string nombre;
    float promedio;

    cout << "PROMEDIOS:"<<endl;

    while (lectura >> nombre >> promedio)
    {
        cout << nombre << " " << promedio << endl;
    }

    lectura.close();
}

int main()
{
    crearArchivo();
    calcularPromedio();
    mostrarPromedio();
    return 0;
}
