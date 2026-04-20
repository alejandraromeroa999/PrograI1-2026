// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Fecha creación: 13/04/2026
// Número de ejercicio: 3

#include <iostream>
using namespace std;

const int F=3;
const int C=4;

void mostrar(char m[F][C]){
    cout<<"Mapa:"<<endl;
    for(int i=0;i<F;i++){
        for(int j=0;j<C;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}

void libres(char m[F][C]){
    int filas=0, columnas=0;

    for(int i=0;i<F;i++){
        bool ok=true;
        for(int j=0;j<C;j++){
            if(m[i][j]=='x') ok=false;
        }
        if(ok) filas++;
    }

    for(int j=0;j<C;j++){
        bool ok=true;
        for(int i=0;i<F;i++){
            if(m[i][j]=='x') ok=false;
        }
        if(ok) columnas++;
    }

    cout<<"Filas sin muertos: "<<filas<<endl;
    cout<<"Columnas sin muertos: "<<columnas<<endl;
}

void posiciones(char m[F][C]){
    cout<<"Posiciones de muertos vivientes:"<<endl;
    for(int i=0;i<F;i++){
        for(int j=0;j<C;j++){
            if(m[i][j]=='x'){
                cout<<"["<<i<<"]["<<j<<"]"<<endl;
            }
        }
    }
}

int cantidad(char m[F][C]){
    int c=0;
    for(int i=0;i<F;i++)
        for(int j=0;j<C;j++)
            if(m[i][j]=='x') c++;
    return c;
}

int main(){
    char m[F][C]={
        {'x','o','x','o'},
        {'o','o','o','o'},
        {'o','o','x','o'}
    };

    mostrar(m);
    libres(m);
    posiciones(m);

    cout<<"Cantidad total de muertos: "<<cantidad(m)<<endl;

    int cont=0;
    for(int i=0;i<F;i++){
        if(m[i][0]=='x') cont++;
    }

    if(cont>=2)
        cout<<"No es posible entrar al complejo"<<endl;
    else
        cout<<"Es posible entrar al complejo"<<endl;

    return 0;
}
