// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Fecha creación: 13/04/2026

#include <iostream>
#include <vector>
using namespace std;

string invertir(string s){
    vector<string> palabras;
    string x="";

    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            palabras.push_back(x);
            x="";
        }else{
            x+=s[i];
        }
    }
    palabras.push_back(x);

    string res="";
    for(int i=palabras.size()-1;i>=0;i--){
        res+=palabras[i];
        if(i!=0) res+=" ";
    }

    return res;
}

int main(){
    string s;
    cout<<"Ingrese una oracion: ";
    getline(cin,s);

    cout<<invertir(s);
}
