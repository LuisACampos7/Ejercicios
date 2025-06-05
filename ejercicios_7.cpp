#include <iostream>
using namespace std;

int main()
{
    int n, m = 0, b;
    cout << "ingrese un numero" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        m += i;
       
    }
     b = m / n;
     cout << b << endl;
}