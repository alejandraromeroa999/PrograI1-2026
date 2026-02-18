// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 11/02/2026

#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Ingrese un numero (1 - 3999): ";
    cin >> num;

    if (num < 1 || num > 3999) {
        cout << "Numero invalido";
    }
    else{
    while (num >= 1000) {
        cout << "M";
        num -= 1000;
    }

    if (num >= 900) {
        cout << "CM";
        num -= 900;
    }

    if (num >= 500) {
        cout << "D";
        num -= 500;
    }

    if (num >= 400) {
        cout << "CD";
        num -= 400;
    }

    while (num >= 100) {
        cout << "C";
        num -= 100;
    }

    if (num >= 90) {
        cout << "XC";
        num -= 90;
    }

    if (num >= 50) {
        cout << "L";
        num -= 50;
    }

    if (num >= 40) {
        cout << "XL";
        num -= 40;
    }

    while (num >= 10) {
        cout << "X";
        num -= 10;
    }

    if (num >= 9) {
        cout << "IX";
        num -= 9;
    }

    if (num >= 5) {
        cout << "V";
        num -= 5;
    }

    if (num >= 4) {
        cout << "IV";
        num -= 4;
    }

    while (num >= 1) {
        cout << "I";
        num -= 1;
    }
    }
    return 0;
}
