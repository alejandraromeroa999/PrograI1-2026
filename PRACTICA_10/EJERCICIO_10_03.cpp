// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 15/04/2026

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void limpiarBitacora(vector<string> &registros, char caracterProhibido, int &correcciones){

    for(int i = 0; i < registros.size(); i++){

        string nuevo = "";

        for(int j = 0; j < registros[i].size(); j++){

            if(registros[i][j] != caracterProhibido){
                nuevo = nuevo + registros[i][j];
            }else{
                correcciones = correcciones + 1;
            }
        }

        registros[i] = nuevo;
    }
}

int main(){

    vector<string> registros;
    int n;
    char c;
    int correcciones = 0;

    cout << "Ingrese cantidad de registros: ";
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        string nombre;
        cout << "Ingrese nombre: ";
        getline(cin, nombre);
        registros.push_back(nombre);
    }

    cout << "Ingrese caracter prohibido: ";
    cin >> c;

    cout << "\nANTES:\n";
    for(int i = 0; i < registros.size(); i++){
        cout << registros[i] << endl;
    }

    limpiarBitacora(registros, c, correcciones);

    cout << "\nDESPUES:\n";
    for(int i = 0; i < registros.size(); i++){
        cout << registros[i] << endl;
    }

    cout << "Correcciones realizadas: " << correcciones << endl;

    return 0;
}
