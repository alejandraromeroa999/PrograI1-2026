// Materia: Programación I, Paralelo 4
// Autor: Alejandra Briggette Romero Aro
// Carnet: 12740980
// Carrera del estudiante: Ingenieria en Telecomunicaciones
// Fecha creación: 06/03/2026


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generarAleatorio(int liminf, int limsup){
    int aleatorio=0;
    aleatorio=(rand()%(limsup-liminf+1))+liminf;
    return aleatorio;
}

int main(){
    srand(time(0));
    int n, ant;
    cout<<"Ingrese el numero de vendedoras: ";
    cin>>n;
    //Precio de producto c/u: 20bs - 50 bs.
    //Sea la antiguedad mayor o igual a 1 anio se dara un procentaje del 15% del salario como bono
    //sueldo basico 3300 bs

    for (int i=1; i<=n;i++){
            int sumaventa=0, v=0;
            float sueldo=0, total, bono, com=0;
            cout<<endl;
            cout<<"Vendedora "<<i<<endl;
            cout<<"Ingrese su antiguedad (en anios): ";
            cin>>ant;
            cout<<"Ventas (bs.): ";
            for (int j=1;j<=10;j++){
                    v=generarAleatorio(20,50);
                    cout<<v<<", ";
                    sumaventa=sumaventa+v;
            }
            com=sumaventa*0.1;
            cout<<endl;
            cout<<"Total de ventas:"<<sumaventa<<endl;
            cout<<"Comision del 10% del total de ventas: "<<com<<endl;
            if (ant>=1){
                bono=3300*0.15;
                cout<<"Bono por antiguedad (15% del salario basico): "<<bono<<endl;
                total=com+bono+3300;
                cout<<"Sueldo total (sueldo basico 3300): "<<total<<endl;
            }
            else{
                    total=com+3300;
                cout<<"Sueldo total (sueldo basico 3300): "<<total;
            }
    }
    return 0;

}
