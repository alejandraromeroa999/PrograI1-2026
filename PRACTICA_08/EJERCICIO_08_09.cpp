// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Fecha creación: 13/04/2026

#include <iostream>
using namespace std;

bool palindromo(string s){
    string limpia="";

    for(int i=0;i<s.size();i++){
        if(isalpha(s[i])){
            limpia+=tolower(s[i]);
        }
    }

    string inv="";
    for(int i=limpia.size()-1;i>=0;i--){
        inv+=limpia[i];
    }

    return limpia==inv;
}

int main(){
    string s;
    getline(cin,s);

    if(palindromo(s)) cout<<"Si es palindromo";
    else cout<<"No es palindromo";
}

