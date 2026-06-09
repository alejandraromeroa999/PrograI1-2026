// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 13/05/2026
//Numero de ejercicio: 8

#include <iostream>
#include <fstream>

using namespace std;

void crearArchivo()
{
    ofstream archivo("documento.txt");
    archivo << "Este es un ejercicio de la practica de programacion" << endl;
    archivo << "Materia Programacion_1" << endl;
    archivo.close();
}

void contar()
{
    ifstream lectura("documento.txt");
    string linea, palabra;

    int lineas = 0;
    int palabras = 0;
    int caracteres = 0;

    while(getline(lectura, linea))
    {
        lineas++;
        caracteres += linea.length();

        for(int i = 0; i < linea.length(); i++)
        {
            if(linea[i] == ' ')
                palabras++;
        }

        palabras++;
    }

    lectura.close();

    cout << "Lineas: " << lineas << endl;
    cout << "Palabras: " << palabras << endl;
    cout << "Caracteres: " << caracteres << endl;
}

int main()
{
    crearArchivo();
    contar();

    return 0;
}
