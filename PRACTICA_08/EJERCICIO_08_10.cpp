// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Fecha creación: 13/04/2026

#include <iostream>
using namespace std;

string mayuscula(string s){
    bool nueva=true;

    for(int i=0;i<s.size();i++){
        if(nueva && s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
            nueva=false;
        }
        else if(s[i]==' '){
            nueva=true;
        }
    }
    return s;
}

int main(){
    string s;
    getline(cin,s);
    cout<<mayuscula(s);
}
