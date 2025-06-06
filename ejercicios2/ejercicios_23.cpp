#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ingrese la cantidad de numeros que desea" << endl;
    cin >> n;

    int arreglo[n];
    int suma = 0;
    int division = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "ingrese el numero " << i + 1 << ":";
        cin >> arreglo[i];
        suma += arreglo[i];
        division = suma / n;
    }

    cout << "el promedio es : " << division;

    return 0;
}