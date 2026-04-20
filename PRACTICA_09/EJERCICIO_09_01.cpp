// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Fecha creación: 13/04/2026
// Número de ejercicio: 1

#include <iostream>
using namespace std;

void leer(int m[][100], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>m[i][j];
        }
    }
}

void intercambiar(int m[][100], int n){
    for(int j=0;j<n;j++){
        int aux = m[0][j];
        m[0][j] = m[n-1][j];
        m[n-1][j] = aux;
    }
}

void mostrar(int m[][100], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n, m[100][100];
    cout<<"Ingrese el orden de la matriz: ";
    cin>>n;

    leer(m,n);
    intercambiar(m,n);
    mostrar(m,n);

    return 0;
}
