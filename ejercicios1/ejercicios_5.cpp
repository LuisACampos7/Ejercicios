#include <iostream>
using namespace std;

int main()
{
    int n, m = 0;
    cout << "ingrese un numero" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {

            cout << m << "+" << i << "=" << m + i << endl;
            m += i;
            // cout<< m <<endl;
        }
    }
    cout << m;
}