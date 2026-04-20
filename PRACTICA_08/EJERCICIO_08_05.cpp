// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Fecha creación: 13/04/2026

#include <iostream>
using namespace std;

bool validar(string c){
    int arroba=0, punto=0;
    bool despues=false;

    for(int i=0;i<c.size();i++){
        if(c[i]=='@'){
            arroba++;
            despues=true;
        }
        else if(c[i]=='.' && despues){
            punto++;
        }
    }

    return arroba==1 && punto>=1;
}

int main(){
    string c;
    cin>>c;

    if(validar(c)) cout<<"Correo valido";
    else cout<<"Correo invalido";
}
