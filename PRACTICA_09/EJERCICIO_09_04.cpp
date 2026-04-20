// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Fecha creación: 13/04/2026
// Número de ejercicio: 4

#include <iostream>
using namespace std;

void generar(int m[][100], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            m[i][j]=2*i + j + 1;
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

int main(){
    int n,m[100][100];

    cout<<"Ingrese el tamano de la matriz: ";
    cin>>n;

    generar(m,n);
    mostrar(m,n);

    return 0;
}
