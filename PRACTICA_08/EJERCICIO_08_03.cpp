// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Fecha creación: 13/04/2026

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<int> generar(int n){
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i]=rand()%101;
    }
    return v;
}

void calcular(vector<int> v){
    int r=0, reg=0, b=0, e=0;

    for(int i=0;i<v.size();i++){
        if(v[i]<=59) r++;
        else if(v[i]<=79) reg++;
        else if(v[i]<=89) b++;
        else e++;
    }

    cout<<"Reprobado: "<<(r*100.0/v.size())<<"%"<<endl;
    cout<<"Regular: "<<(reg*100.0/v.size())<<"%"<<endl;
    cout<<"Bueno: "<<(b*100.0/v.size())<<"%"<<endl;
    cout<<"Excelente: "<<(e*100.0/v.size())<<"%"<<endl;
}

int main(){
    srand(time(0));

    int N;
    cout<<"Ingrese cantidad de estudiantes: ";
    cin>>N;

    vector<int> notas = generar(N);
    calcular(notas);
}
