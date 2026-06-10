// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 22/05/2026

#include<iostream>
#include<cstring>
using namespace std;

struct Producto
{
    char nombre[50];
    char codigo[20];
    float precio;
    int cantidad_en_inventario;
    char observaciones[100];
};

void leerProductos(Producto producto[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin.ignore();

        cout<<endl;
        cout<<"Producto "<<i+1<<endl;

        cout<<"Nombre: ";
        cin.getline(producto[i].nombre,50);

        cout<<"Codigo: ";
        cin.getline(producto[i].codigo,20);

        cout<<"Precio: ";
        cin>>producto[i].precio;

        cout<<"Cantidad en inventario: ";
        cin>>producto[i].cantidad_en_inventario;

        if(producto[i].cantidad_en_inventario<5)
        {
            strcpy(producto[i].observaciones,
            "PRODUCTO CON BAJA CANTIDAD DE INVENTARIO");
        }
        else
        {
            strcpy(producto[i].observaciones,"Sin observaciones");
        }
    }
}

int productoMasCaro(Producto producto[], int n)
{
    int posicion=0;

    for(int i=1;i<n;i++)
    {
        if(producto[i].precio>producto[posicion].precio)
        {
            posicion=i;
        }
    }

    return posicion;
}

int totalProductos(Producto producto[], int n)
{
    int suma=0;

    for(int i=0;i<n;i++)
    {
        suma=suma+producto[i].cantidad_en_inventario;
    }

    return suma;
}

int main()
{
    Producto producto[100];
    int n;
    int posicion;

    cout<<"Cantidad de productos: ";
    cin>>n;

    leerProductos(producto,n);

    posicion=productoMasCaro(producto,n);

    cout<<endl;
    cout<<"PRODUCTO MAS CARO"<<endl;
    cout<<"Nombre: "<<producto[posicion].nombre<<endl;
    cout<<"Precio: "<<producto[posicion].precio<<endl;

    cout<<endl;
    cout<<"Cantidad total en inventario: "
        <<totalProductos(producto,n)<<endl;

    return 0;
}
