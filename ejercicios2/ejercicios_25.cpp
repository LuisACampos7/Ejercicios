#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ingrese la cantidad de numeros para cada arreglo" << endl;
    cin >> n;

    int arreglo[n];
    int arreglo2[n];
    int arreglocomb[2 * n];

    for (int i = 0; i < n; i++)
    {
        cout << "ingrese el numero " << i + 1 << ":";
        cin >> arreglo[i];
    }
    cout << "segundo arreglo" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "ingrese el numero " << i + 1 << ":";
        cin >> arreglo2[i];
    }
    for (int i = 0; i < n; i++)
    {
        arreglocomb[i] = arreglo[i];
        arreglocomb[i + n] = arreglo2[i];
    }
    cout << "arreglo combinado :" << endl;
    for (int i = 0; i < 2 * n; i++)
    {
        cout << arreglocomb[i] << endl;
    }
    return 0;
}