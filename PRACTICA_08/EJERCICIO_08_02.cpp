// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Fecha creación: 13/04/2026

#include <iostream>
#include <vector>
using namespace std;

void interseccion(vector<string> a, vector<string> b){
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            if(a[i]==b[j]){
                cout << a[i] << ", ";
            }
        }
    }
}

int main(){
    cout<<"Cliente (s) en comun: "<<endl;
    vector<string> emp1 = {"Juan","Carmen","Carlos","Luz"};
    vector<string> emp2 = {"Mariana","Luz","Carmen","Luciana"};

    interseccion(emp1, emp2);
}
