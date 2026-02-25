// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 23/02/2026

#include <iostream>
using namespace std;

int main(){
    int n;
    float precio, desc, iva, subt, total;
    subt = 0;
    total = 0;
    iva = 0;
    desc = 0;
    cout<<"Ingrese la cantidad de productos vendidos: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"Ingrese el precio del producto "<<i<<": ";
        cin>>precio;
        subt = subt + precio;
    }
    iva = subt * 0.13;
    total = subt + iva;

    if(total > 2500){
        desc = total * 0.05;
        total = total - desc;
    }
    cout<<"Total de ventas del dia: "<<total<<" bs."<<endl;
    cout<<"Pago de IVA (13%): "<<iva<<" bs."<<endl;

    return 0;
}
