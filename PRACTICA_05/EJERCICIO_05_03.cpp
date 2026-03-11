// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 06/03/2026


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

float calculoSalario(float hora, float tarifa, float bonificacion){
    float sal=hora*tarifa;
    float bonificacion1;
    cout<<"Salario del trabajador: "<<sal<<" bs."<<endl;
    if (bonificacion!=0){
            bonificacion1=sal*bonificacion;
            sal=sal+(sal*bonificacion);
        cout<<"Bonificacion: "<<bonificacion1<<" bs."<<endl;
        cout<<"Salario (mas bonificacion del 5%): "<<sal<<" bs.";
    }
    else cout<<"Bonificacion de 0 bs.";
}
int main(){
    float hora, tar, bon;
    cout<<"Ingrese las horas trabajadas: ";
    cin>>hora;
    cout<<"Ingrese la tarifa por hora: ";
    cin>>tar;
    if (hora>8){
        bon=0.05; //5% del salario
    }
    else bon=0;
    cout<<calculoSalario(hora,tar,bon);
    return 0;
}
