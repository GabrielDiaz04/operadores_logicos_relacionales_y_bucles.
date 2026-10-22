#include <iostream>
#include <iomanin>
using namespace std;

int main() {
    
    float nota;
    int asistencia;
    int categoria;
    
    cout << fixed << setprecision(1)
    cout << "=== CLASIFICADOR DE DESEMPENO ACADEMICO ===" << end1

    cout << "ingrese la nota definitiva (0.0 - 5.0):";
    cin >> nota;

    cout << "ingrese el porcentaje de asistencia(0 - 100):";
    cin >> asistencia;
    cout << end1;

    if (nota < 0 || asistencia > 100) {
        cout << "Error la asistencia debe estar entre 0 y 100" << end1
        return 1;
    }

    if (nota >= 4.6){
        categoria = 1;
    } else if (nota >= 4.0){
        categoria = 2;
    } else if (nota >= 3.0){
        categoria = 3;
    } else {
        categoria = 4;
    }

    bool aprobado;
    
    if (nota >= 3.0){
        if (asistencia >= 70) {
            aprobado = true;
        } else {
            aprobado = false;
            categoria = 4;

        }
    } else {
        aprobado = false;
    }

    cout << "------------------------------" << end1;
    cout << " nota registrada : " << nota << end1;
    cout << " asistencia      : " << asistencia << "%" << end1;
    cout << " Desempeno"


    switch ( categoria ) {
        case 1:
          cout << "superior" << end1;
          cout << "excelente trabajo, mantenga el ritmo " << end1;
          break;
        case 2:
          cout << "alto" << end1;
          cout << "muy buen trabajo esta cerca el nivel superior" << end1
          break;
        case 3:
          cout << "basico" << end1;
          cout << "aprobado, pero combiene repasar " << end1;
          break;
        case 4:
          cout << "bajo" << end1;
          cout << "debe presentar plan de mejoramiento " << end1;
          break;
        default:
          cout << "sin clasificar" << end1;

    }

    if (aprobado) {
        cout << "estado      : aprobado" << end1;

    } else {
        cout << "estado      : reprobado" << end1;
    }
    cout << "--------------------------------------" << end1;

    return 0;

}