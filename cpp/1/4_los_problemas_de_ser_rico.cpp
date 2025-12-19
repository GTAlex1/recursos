// Los problemas de ser rico https://aceptaelreto.com/problem/statement.php?id=191
#include <iostream>
using namespace std;

int main()
{
    int iteraciones;
    int litros;
    int diferencia;
    int acumulador = 0;
    
    cin >> iteraciones >> litros >> diferencia;
    if (!iteraciones > 0){
        while (!iteraciones > 0) {
        cout << "Número no válido (iteraciones), ingresa otro: ";
        cin >> iteraciones;
        }
    }
    if (!diferencia > 0){
        while (!diferencia > 0) {
        cout << "Número no válido (diferencia), ingresa otro: ";
        cin >> diferencia;
        }
    }
    for (int i = iteraciones; i > 0; i--) {
        acumulador += litros;
        litros -= diferencia;
    }
    
    cout << acumulador;
}