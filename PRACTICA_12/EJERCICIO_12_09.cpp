// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 13/05/2026
//Numero de ejercicio: 9

#include <iostream>
#include <fstream>

using namespace std;

void crearArchivo()
{
    ofstream archivo("mensaje.txt");
    archivo << "HOLA";
    archivo.close();
}

void cifrar()
{
    ifstream lectura("mensaje.txt");
    ofstream salida("mensaje_cifrado.txt");

    char letra;

    while(lectura.get(letra))
    {
        if(letra >= 'A' && letra <= 'Z')
        {
            letra = letra + 3;

            if(letra > 'Z')
            {
                letra = letra - 26;
            }
        }

        else if(letra >= 'a' && letra <= 'z')
        {
            letra = letra + 3;

            if(letra > 'z')
            {
                letra = letra - 26;
            }
        }

        salida << letra;
    }
    lectura.close();
    salida.close();
}

void mostrarArchivo()
{
    ifstream lectura("mensaje_cifrado.txt");

    char letra;

    cout << "Mensaje cifrado:"<<endl;

    while(lectura.get(letra))
    {
        cout << letra;
    }

    lectura.close();
}

int main()
{
    crearArchivo();
    cifrar();
    mostrarArchivo();

    return 0;
}
