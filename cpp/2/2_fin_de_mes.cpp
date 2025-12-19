// Fin de mes https://aceptaelreto.com/problem/statement.php?id=313
#include <iostream>
using namespace std;

int main()
{
    int s = 0;
    int r = 0;
    cin >> s;
    while (!(s >= -10000)) {
        cout << "Número menor a -10000, elija otro (s): ";
        cin >> s;
    }
    cin >> r;
    while (!(r <= 10000)) {
        cout << "Número menor a 10000, elija otro (r): ";
        cin >> r;
    }
    
    cout << (s-r > 0 ? "SI\n" : "NO\n");
}