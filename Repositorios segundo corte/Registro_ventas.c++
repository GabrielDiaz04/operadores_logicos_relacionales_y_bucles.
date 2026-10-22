
#include <iostream>
using namespace std;

int main(){

    double venta;
    double totalventas;
    int ventasgrande;
    char repetir;

    do {

        totalventas = 0;
        ventasgrandes = 0;

        cout << "===================\n";
        cout << "     registro de ventas\n";
        cout << "=====================\n\n";
        
        for(int ventanumero = 1; ventanumero <= 5; ventanumero++){
            cout << "ingrese el valor de venta "
                 << ventanumero << ": $";
            cin >> venta;

            while (venta <= 0){
                cout << "el valor debe ser mayor que $0.\n";

                cout << "ingrese nuevamente la venta: $";
                cin >> venta;

            }
            totalventa = totalventa + venta;

            if (venta > 100000) {
                ventasgrande++;
            }



        }

        cout << "\n===================================\n";
        cout << "  resumen de ventas\n";
        cout << "======================================\n";

        cout << "total vendido: $"
             << totalventas << endl;


        cout << "ventas superiores a $100.000"
             << ventasgrandes << endl;
             
    }
}

