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
        v[i]=rand()%256;
    }
    return v;
}

void segmentos(vector<int> v){
    int cont[26]={0};

    for(int i=0;i<v.size();i++){
        cont[v[i]/10]++;
    }

    for(int i=0;i<26;i++){
        cout<<i*10<<"-"<<i*10+9<<": "<<cont[i]<<endl;
    }
}

int main(){
    srand(time(0));

    int N;
    cout<<"Ingrese cantidad de pixeles: ";
    cin>>N;

    vector<int> img = generar(N);
    segmentos(img);
}
