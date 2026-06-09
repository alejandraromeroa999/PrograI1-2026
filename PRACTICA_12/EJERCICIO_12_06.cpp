// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 13/05/2026
//Numero de ejercicio: 6

#include <iostream>
#include <fstream>

using namespace std;

void crearArchivo()
{
    ofstream archivo("temperaturas.txt");

    archivo << "Santa_Cruz 33.5" << endl;
    archivo << "Oruro 29.5" << endl;
    archivo << "La_Paz 26.2" << endl;
    archivo << "Cochabamba 32.0" << endl;

    archivo.close();
}

void tempmayorn(float N)
{
    ifstream lectura("temperaturas.txt");
    ofstream salida("altastemperaturas.txt");

    string ciudad;
    float temperatura;

    while (lectura >> ciudad >> temperatura)
    {
        if (temperatura > N)
        {
            salida << ciudad << " " << temperatura << endl;
        }
    }

    lectura.close();
    salida.close();
}

void mostrarArchivo()
{
    ifstream lectura("altastemperaturas.txt");

    string ciudad;
    float temperatura;

    cout << "Ciudades con temperaturas mayores al limite: "<<endl;

    while (lectura >> ciudad >> temperatura)
    {
        cout << ciudad << " " << temperatura << endl;
    }

    lectura.close();
}

int main()
{
    float N;

    crearArchivo();

    cout << "Ingrese la temperatura limite: ";
    cin >> N;

    tempmayorn(N);
    mostrarArchivo();

    return 0;
}
