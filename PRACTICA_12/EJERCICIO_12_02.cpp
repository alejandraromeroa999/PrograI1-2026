// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 13/05/2026
//Numero de ejercicio: 2

#include <iostream>
#include <fstream>

using namespace std;

void archivotexto()
{
    ofstream archivo("texto.txt");

    archivo << "Hola mundo este es un archivo de texto" << endl;

    archivo.close();
}
int contarPalabras()
{
    ifstream lectura("texto.txt");

    string palabra;
    int contador = 0;

    while(lectura >> palabra)
    {
        contador++;
    }

    lectura.close();
    return contador;
}

int main()
{
    archivotexto();
    cout << "Cantidad de palabras: "<< contarPalabras();

    return 0;
}
