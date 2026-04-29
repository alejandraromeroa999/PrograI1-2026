// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 15/04/2026


#include <iostream>
#include <string>
using namespace std;

void analizarClima(float datos[4][7], int idx, float &maxi, float &mini, float &prom){

    maxi = datos[idx][0];
    mini = datos[idx][0];
    float suma = 0;

    for(int j = 0; j < 7; j++){

        if(datos[idx][j] > maxi){
            maxi = datos[idx][j];
        }

        if(datos[idx][j] < mini){
            mini = datos[idx][j];
        }

        suma += datos[idx][j];
    }

    prom = suma / 7;
}

int main(){

    float datos[4][7];
    string ciudades[4] = {"La Paz", "Cochabamba", "Santa Cruz", "Oruro"};
    string nom;
    int idx = -1;

    float maxi, mini, prom;

    for(int i = 0; i < 4; i++){
        cout << "Ciudad: " << ciudades[i] << endl;

        for(int j = 0; j < 7; j++){
            cout << "Dia " << j+1 << ": ";
            cin >> datos[i][j];
        }
    }

    cout << "Ingrese ciudad: ";
    cin.ignore();
    getline(cin, nom);

    for(int i = 0; i < 4; i++){
        if(ciudades[i] == nom){
            idx = i;
        }
    }

    if(idx == -1){
        cout << "No existe";
    }else{

        analizarClima(datos, idx, maxi, mini, prom);

        cout << "max: " << maxi << endl;
        cout << "min: " << mini << endl;
        cout << "prom: " << prom << endl;
    }

    return 0;
}
