// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Fecha creación: 13/04/2026
// Número de ejercicio: 6

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

void transpuesta(int m[][100], int t[][100], int f, int c){
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            t[j][i]=m[i][j];
        }
    }
}

void mostrar(int m[][100], int f, int c){
    cout<<"Matriz transpuesta:"<<endl;
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int f,c;

    cout<<"Ingrese numero de filas: ";
    cin>>f;
    cout<<"Ingrese numero de columnas: ";
    cin>>c;

    int m[100][100], t[100][100];

    leer(m,f,c);
    transpuesta(m,t,f,c);
    mostrar(t,c,f);

    return 0;
}
