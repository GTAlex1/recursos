// Artrópodos https://aceptaelreto.com/problem/statement.php?id=293
#include <iostream>
using namespace std;

int main()
{
    int insectos;
    int aracnidos;
    int crustaceos;
    int miriapodos;
    int anillos;
    
    cout << "¿Cuántos insectos hay? ";
    cin >> insectos;
    cout << "¿Cuántos arácnidos hay? ";
    cin >> aracnidos;
    cout << "¿Cuántos crustáceos hay? ";
    cin >> crustaceos;
    cout << "¿Cuántas escalopendras hay? ";
    cin >> miriapodos;
    cout << "¿Cuántos anillos tienen? ";
    cin >> anillos;
    
    cout << "Hay " << 6 * insectos + 8 * aracnidos + 10 * crustaceos + 2 * anillos * miriapodos << " patas en total.";
}