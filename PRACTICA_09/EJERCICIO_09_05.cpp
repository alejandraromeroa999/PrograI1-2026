// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Fecha creación: 13/04/2026
// Número de ejercicio: 5

#include <iostream>
using namespace std;

void leer(int m[][100], int f, int c){
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout<<"Elemento ["<<i<<"]["<<j<<"]: ";
            cin>>m[i][j];
        }
    }
}

void multiplicar(int a[][100], int b[][100], int r[][100], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            r[i][j]=0;
            for(int k=0;k<m;k++){
                r[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}

void mostrar(int m[][100], int f, int c){
    cout<<"Matriz resultado:"<<endl;
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n,m;
    cout<<"Filas de la primera matriz: ";
    cin>>n;
    cout<<"Columnas de la primera matriz: ";
    cin>>m;

    int a[100][100], b[100][100], r[100][100];

    cout<<"Ingrese matriz A:"<<endl;
    leer(a,n,m);

    cout<<"Ingrese matriz B:"<<endl;
    leer(b,m,n);

    multiplicar(a,b,r,n,m);
    mostrar(r,n,n);

    return 0;
}
