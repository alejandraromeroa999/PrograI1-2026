// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 13/05/2026
//Numero de ejercicio: 5

#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

void crearArchivo()
{
    ofstream archivo("productos.txt");

    archivo << "Mango 8.30" << endl;
    archivo << "Banana 0.20" << endl;
    archivo << "Mandarina 1.10" << endl;

    archivo.close();
}

void actualizarProducto(string nombreProducto, float nuevoPrecio)
{
    ifstream lectura("productos.txt");
    ofstream auxiliar("auxiliar.txt");

    string producto;
    float precio;
    bool encontrado = false;

    while (lectura >> producto >> precio)
    {
        if (producto == nombreProducto)
        {
            auxiliar << producto << " " << nuevoPrecio << endl;
            encontrado = true;
        }
        else
        {
            auxiliar << producto << " " << precio << endl;
        }
    }

    lectura.close();
    auxiliar.close();

    remove("productos.txt");
    rename("auxiliar.txt", "productos.txt");

    if (encontrado)
    {
        cout << "Producto actualizado correctamente"<<endl;
    }
    else
    {
        cout << "El producto no existe"<<endl;
    }
}

void mostrarProductos()
{
    ifstream lectura("productos.txt");

    string producto;
    float precio;

    cout << "PRODUCTOS: "<<endl;

    while (lectura >> producto >> precio)
    {
        cout << producto << "  " << precio << endl;
    }

    lectura.close();
}

int main()
{
    string nombreProducto;
    float nuevoPrecio;
    crearArchivo();

    cout << "Productos disponibles:\n";
    mostrarProductos();

    cout << "Ingrese el producto a modificar: ";
    cin >> nombreProducto;

    cout << "Ingrese el nuevo precio: ";
    cin >> nuevoPrecio;

    actualizarProducto(nombreProducto, nuevoPrecio);

    cout << "Contenido actualizado del archivo:"<<endl;

    mostrarProductos();

    return 0;
}
