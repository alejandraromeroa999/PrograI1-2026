// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Fecha creación: 13/04/2026

#include <iostream>
using namespace std;

void dividir(string s, char coma){
    string aux="";
    for(int i=0;i<s.size();i++){
        if(s[i]==coma){
            cout<<aux<<endl;
            aux="";
        }else aux+=s[i];
    }
    cout<<aux;
}

int main(){
    string s;
    cin>>s;
    dividir(s, ',');
}
