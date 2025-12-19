// Cuadrados con cerillas https://aceptaelreto.com/problem/statement.php?id=340
#include <iostream>
using namespace std;

int main()
{
    int horizontal;
    int vertical;
    cout << "¿Cuántos cuadrados en horizontal quieres hacer? ";
    cin >> horizontal;
    cout << "¿Cuántos cuadrados en vertical quieres hacer? ";
    cin >> vertical;
    
    cout << "Se necesitan " << (horizontal + 1) * vertical + (vertical + 1) * horizontal << " cerillas.";
}
