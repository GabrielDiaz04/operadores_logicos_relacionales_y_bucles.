#include <iostream>
using namespace std;

int main() {

    double nota;
    double suma = 0;
    double promedio;
    int aprobados = 0;

}

do {

    suma = 0;
    aprobados = 0;

    cout << "================================ \n";
    cout << "  REGISTRO DE CALIFICACION \n";
    cout << " ===============================\n";

    for ( int estudiante = 1; estudiante <= 5; estudiante++) {

        cout << "ingrese la nota del estudiante "
             << estudiante << ": ";
        cin >> nota;
    }

    suma = suma + nota;

    if ( nota >= 3.0){
        aprobados++;
    }

    promedio = suma / 5;

    cout << "\n ===================\n";
    cout << "      resultados\n    ";
    cout << "======================\n";

    cout << " suma de las notas: "<< suma << endl;
    cout << " promedio:" << promedio << endl;
    cout << " estudiante aprobados" << aprobados << endl;
    cout << " estudiantes reprobados: "
         << 5 - aprobados << endl;

    cout << "\n desea registrar otro grupo? (s/n): ";
    cin >> repetir;


} while (repetir == 'S' || repetir == 's');


cout << "\n programa finalizado. \n";

return 0;
