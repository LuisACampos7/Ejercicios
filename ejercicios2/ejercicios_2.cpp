#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ingrese un numero";
    cin >> n;

    int arreglo[n];

    for (int i = 0; i < n; i++)
    {
        cout << "ingrese su numero " << i + 1;
        cin >> arreglo[i];
    }
    int mayor = arreglo[0];
    int menor = arreglo[0];

    for (int i = 1; i < n; i++)
    {
        if (arreglo[i] > mayor)
        {
            mayor = arreglo[i];
        }
        if (arreglo[i] < menor)
        {
            menor = arreglo[i];
        }
    }
    cout << "el numero mayor es :" << mayor << endl;
    cout << "el numero menor es :" << menor << endl;

    return 0;
}