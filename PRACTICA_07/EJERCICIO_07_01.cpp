// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Fecha de creación: 27/03/2026
//Numero de ejercicio: 1

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void voltajes(double v[], int n) {
    for(int i = 0; i < n; i++) {
        v[i] = 20 + (rand() % 201);
    }
}

void temperaturas(double t[], int n) {
    for(int i = 0; i < n; i++) {
        t[i] = rand() % 101;
    }
}

void caracteres(char c[], int n) {
    for(int i = 0; i < n; i++) {
        int r = rand() % 3;

        if(r == 0)
            c[i] = '0' + rand() % 10;
        else if(r == 1)
            c[i] = 'A' + rand() % 26;
        else
            c[i] = 'a' + rand() % 26;
    }
}
void anios(int a[], int n) {
    for(int i = 0; i < n; i++) {
        a[i] = 1990 + rand() % (2025 - 1990 + 1);
    }
}

void velocidades(double v[], int n) {
    for(int i = 0; i < n; i++) {
        v[i] = 10 + (rand() % 291); // 10 a 300
    }
}

void distancias(double d[], int n) {
    for(int i = 0; i < n; i++) {
        d[i] = 1 + (rand() % 1000); // 1 a 1000
    }
}

void mostrarDouble(double v[], int n) {
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void mostrarInt(int v[], int n) {
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void mostrarChar(char v[], int n) {
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(time(0));

    double v1[100], t[50], vel[32], dist[1000];
    int a[100];
    char c[30];

    voltajes(v1, 100);
    temperaturas(t, 50);
    caracteres(c, 30);
    anios(a, 100);
    velocidades(vel, 32);
    distancias(dist, 1000);

    cout << "Voltajes: ";
    mostrarDouble(v1, 100);
    cout<<endl;
    cout << "Temperaturas: ";
    mostrarDouble(t, 50);
    cout<<endl;
    cout << "Caracteres: ";
    mostrarChar(c, 30);
    cout<<endl;
    cout << "Anios: ";
    mostrarInt(a, 100);
    cout<<endl;
    cout << "Velocidades: ";
    mostrarDouble(vel, 32);
    cout<<endl;
    cout << "Distancias: ";
    mostrarDouble(dist, 1000);

    return 0;
}
