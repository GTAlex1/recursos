// Triángulos https://aceptaelreto.com/problem/statement.php?id=180
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) {
        swap(a, b);
    }
    if (a > c) {
        swap(a, c);
    }
    if (b > c) {
        swap (b, c);
    }
    int hipotenusaCuadrada = (a*a + b*b);
    if (a+b <= c) {
        cout << "IMPOSIBLE";
    } else if (hipotenusaCuadrada == c*c) {
        cout << "RECTÁNGULO";
    } else if (hipotenusaCuadrada > c*c) {
        cout << "ACUTÁNGULO";
    } else if (hipotenusaCuadrada <  c*c) {
        cout << "OBTUSÁNGULO";
    }
}