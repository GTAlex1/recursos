// Goteras https://aceptaelreto.com/problem/statement.php?id=216
#include <iostream>
using namespace std;

int main()
{
    int segundos = 0, minutos = 0, horas = 0, numero;
    
    cin >> numero ;
    if (numero < 0){
        while (numero < 0) {
        cout << "Número no válido, ingresa otro: ";
        cin >> numero;
        }
    }
    
    for (int i = numero; i > 0; i--) {
        segundos += 1;
        if (segundos == 60) {
            minutos +=1;
            segundos = 0;
            if (minutos == 60) {
                horas += 1;
                minutos = 0;
            }
        }
    }
    
    cout << endl << endl 
    << horas << ":" << minutos << ":" << segundos;
}