// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Fecha creación: 13/04/2026

#include <iostream>
using namespace std;

string limpiar(string s){
    string r="";
    for(int i=0;i<s.size();i++){
        if(!(s[i]>='0' && s[i]<='9')){
            r+=s[i];
        }
    }
    return r;
}

int main(){
    string s;
    cin>>s;
    cout<<limpiar(s);
}
