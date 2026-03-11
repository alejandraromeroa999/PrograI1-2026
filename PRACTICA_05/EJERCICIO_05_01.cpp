// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 04/03/2026

/*La comercial 'La Estrella' vende n productos en un día, de los cuales factura al
precio de cada uno con un IVA del 13%, y si el monto final se excede en 2500 Bs se
aplica un descuento del 5%. Obtener la suma total de las ventas realizadas en el
día y calcular el pago del IVA del 13% al servicio de Impuestos Nacionales. El
precio de los productos debe ser generado en forma aleatoria entre 20 y 50.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generarAleatorio(int liminf, int limsup){
    int aleatorio=0;
    aleatorio=(rand()%(limsup-liminf+1))+liminf;
    return aleatorio;
}

int main (){
    srand(time(0));

    int n;
    float precio, suma=0, sumatotal=0, ivatotal, desc=0, res;

    cout<<"Ingrese la cantidad de productos vendidos: ";
    cin>>n;

    for (int i=1; i<=n; i++){
        precio=generarAleatorio(20,50);
        cout<<"Producto "<<i<<": "<<precio<<"  ";

        suma=suma+precio;

        precio=precio+(precio*0.13);
        cout<<"Precio con IVA: "<<precio<<endl;

        sumatotal=sumatotal+precio;
    }

    ivatotal=suma*0.13;

    if (sumatotal>2500){
        desc=sumatotal*0.05;
        res=sumatotal-desc;
    } else {
        res=sumatotal;
    }

    cout<<endl;
    cout<<"============================"<<endl;
    cout<<"Total sin IVA: "<<suma<<endl;
    cout<<"IVA a pagar (13%): "<<ivatotal<<endl;
    cout<<"Total con IVA: "<<sumatotal<<endl;

    if (sumatotal>2500)
        cout<<"Descuento 5% aplicado: "<<res<<endl;

    return 0;
}
