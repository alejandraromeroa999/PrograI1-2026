// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Fecha creación: 13/04/2026

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void mostrarAleatorio(vector<string> nombres, vector<string> apellidos, vector<int> edades, int n){
    for(int i=0;i<n;i++){
        int r = rand()%10;
        cout << nombres[r] << " " << apellidos[r] << ", " << edades[r] << " anios"<<endl;
    }
}

int main(){
    srand(time(0));

    int n;

    cout<<"Ingrese la cantidad de datos que desea desplegar: ";
    cin>>n;
    vector<string> nombres = {"Carla","Mario","Celia","Maria","Melisa","Luz","Juan","Fernando","Alexa","Sergio"};
    vector<string> apellidos = {"Vargas","Quispe","Rojas","Diaz","Torres","Cardenas","Vargas","Castillo","Merida","Gutierrez"};
    vector<int> edades = {20,87,40,11,70,16,24,14,46,21};

    mostrarAleatorio(nombres, apellidos, edades, n);
}
