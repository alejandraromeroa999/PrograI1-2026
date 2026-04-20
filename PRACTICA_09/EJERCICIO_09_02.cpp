// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Fecha creación: 13/04/2026
// Número de ejercicio: 2

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void generar(int m[][100], int n, int a, int b){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            m[i][j] = a + rand()%(b-a+1);
        }
    }
}

void mostrar(int m[][100], int n){
    cout<<"Matriz generada:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}

int sumaColumna(int m[][100], int n){
    int suma=0;
    for(int i=0;i<n;i++){
        suma+=m[i][n-1];
    }
    return suma;
}

int productoFila(int m[][100], int n){
    int p=1;
    for(int j=0;j<n;j++){
        p*=m[n-1][j];
    }
    return p;
}

void mayor(int m[][100], int n){
    int max=m[0][0], fi=0, co=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(m[i][j]>max){
                max=m[i][j];
                fi=i;
                co=j;
            }
        }
    }
    cout<<"Mayor valor: "<<max<<" en posicion ["<<fi<<"]["<<co<<"]"<<endl;
}

double desviacion(int m[][100], int n){
    double suma=0, media, total=0;
    int cant=n*n;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            suma+=m[i][j];

    media=suma/cant;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            total+=pow(m[i][j]-media,2);

    return sqrt(total/cant);
}

int main(){
    int n,a,b,m[100][100];

    cout<<"Ingrese el tamanio de la matriz: ";
    cin>>n;

    cout<<"Ingrese el valor minimo (A): ";
    cin>>a;

    cout<<"Ingrese el valor maximo (B): ";
    cin>>b;

    generar(m,n,a,b);
    mostrar(m,n);

    cout<<"Suma de la ultima columna: "<<sumaColumna(m,n)<<endl;
    cout<<"Producto de la ultima fila: "<<productoFila(m,n)<<endl;
    mayor(m,n);
    cout<<"Desviacion estandar: "<<desviacion(m,n)<<endl;

    return 0;
}
