// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet:12740980
// Carrera del estudiante: Ingenieria en telecomunicaciones
// Fecha creación: 27/03/2026

#include <iostream>
using namespace std;

double calcularArea(double lado){

    return lado*lado;

}

double calcularArea(double base, double altura){

    return base*altura;

}

float calcularArea(float radio, float PI){
    return PI*radio*radio;
}

int main (){

    double lado = 5;
    double base = 4, altura = 3;
    float radio = 3, PI = 3.1416;

    cout<<"Area cuadrado: "<<calcularArea(lado)<<endl;
    cout<<"Area rectangulo: "<<calcularArea(base, altura)<<endl;
    cout<<"Area circulo: "<<calcularArea(radio, PI)<<endl;

    return 0;
}
