// Gregorio XIII https://aceptaelreto.com/problem/statement.php?id=355
#include <iostream>
using namespace std;

int main()
{
    int y;
    cin >> y;
    while (!(y > 1582 && y < 100000)) {
        cout << "Número inválido, elija otro: ";
        cin >> y;
    }
    
    cout << "Ese año fue " << (((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) ? "bisiesto.\n" : "no bisiesto.\n");
}