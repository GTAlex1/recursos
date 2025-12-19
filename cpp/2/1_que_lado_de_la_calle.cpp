// ¿Qué lado de la calle? https://aceptaelreto.com/problem/statement.php?id=217
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    while (n > 1000) {
        cout << "Número mayor a 1000, elige uno menor: ";
        cin >> n;
    }
    
    string paridad = (n % 2 == 0) ? "derecha" :"izquierda";
    
    cout << "Ve a la " << paridad << endl;
}