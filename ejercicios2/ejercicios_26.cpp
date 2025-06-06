#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ingrese la cantidad de valores de los arreglos" << endl;
    cin >> n;

    int arreglo[n];
    int arreglo2[n];

    for (int i = 0; i < n; i++)
    {
        cout << "ingrese la cantidad " << i + 1 << " : ";
        cin >> arreglo[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "ingrese la cantidad " << i + 1 << " : ";
        cin >> arreglo2[i];
    }
    for (int i = 0; i < n; i++)
    {
        int temp = arreglo[i];
        arreglo[i] = arreglo2[i];
        arreglo2[i] = temp;
    }
    cout << "Arreglo 1: ";
    for (int i = 0; i < n; i++)
    {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    cout << "Arreglo 2: ";
    for (int i = 0; i < n; i++)
    {
        cout << arreglo2[i] << " ";
    }
    cout << endl;

    return 0;
}