// Yo soy tu... https://aceptaelreto.com/problem/statement.php?id=427
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    string b;
    cin >> a >> b;
    cout << (a == "Luke" && b == "padre" ? "TOP SECRET" : a + ", yo soy tu " + b);
}